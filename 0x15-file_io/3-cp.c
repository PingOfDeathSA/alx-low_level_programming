#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * error_exit - reads and see if files can be read.
 * @msg: messge exit.
 * @code: coply file code.
 * @argv: arguments 1.
* @argc: arguments 2.
 * Return: no return.
 */

void error_exit(int code, char *msg) {
    dprintf(STDERR_FILENO, "Error: %s\n", msg);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to");
    }

    char *file_from = argv[1];
    char *file_to = argv[2];

    int fd_src = open(file_from, O_RDONLY);
    if (fd_src == -1) {
        error_exit(98, "Can't read from file");
    }

    int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_dest == -1) {
        error_exit(99, "Can't write to file");
    }

    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    while ((bytes_read = read(fd_src, buffer, sizeof(buffer))) > 0) {
        bytes_written = write(fd_dest, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            error_exit(99, "Can't write to file");
        }
    }

    if (bytes_read == -1) {
        error_exit(98, "Can't read from file");
    }

    if (close(fd_src) == -1 || close(fd_dest) == -1) {
        error_exit(100, "Can't close fd");
    }

    return 0;
}

