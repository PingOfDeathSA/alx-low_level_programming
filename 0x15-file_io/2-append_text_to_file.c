#include "main.h"

/**
 * Function: append_text_to_file
 * Description: Appends the specified text to the end of a file.
 *
 * @param filename: A pointer to the name of the file.
 * @param text_content: The string to append to the end of the file.
 *
 * @return: -1 if the function fails, the filename is NULL, or the file doesn't exist or lacks write permissions.
 *           1 if the text is successfully appended to the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written, text_length = 0;

    // Check if the filename is NULL; return -1 if it is.
    if (filename == NULL)
        return (-1);

    // Calculate the length of the text_content string.
    if (text_content != NULL) {
        while (text_content[text_length] != '\0')
            text_length++;
    }

    // Open the file for writing in append mode.
    file_descriptor = open(filename, O_WRONLY | O_APPEND);

    // Write the text_content to the end of the file and store the number of bytes written in 'bytes_written'.
    bytes_written = write(file_descriptor, text_content, text_length);

    // Check if either the file descriptor (file_descriptor) or the write operation (bytes_written) failed.
    // If so, return -1.
    if (file_descriptor == -1 || bytes_written == -1)
        return (-1);

    // Close the file descriptor and return 1 to indicate success.
    close(file_descriptor);

    return (1);
}

