#include "main.h"

/**
 * Function: read_textfile
 * Purpose: Reads the content of a text file and outputs it to the standard output.
 * @param filename: The name of the text file to be read.
 * @param letters: The number of characters to be read.
 * @return: The actual number of bytes read and printed, denoted as 'w'.
 * Returns 0 in case of function failure or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d;
ssize_t num_of_reads, num_of_writes;
char *b_uffer;
if (!filename)
return (0);
file_d = open(filename, O_RDONLY);
if (file_d == -1)
return (0);
b_uffer = malloc(sizeof(char) * (letters));
if (!b_uffer)
return (0);
num_of_reads = read(file_d, b_uffer, letters);
num_of_writes = write(STDOUT_FILENO, b_uffer, num_of_reads);
close(file_d);
free(b_uffer);
return (num_of_writes);
}

