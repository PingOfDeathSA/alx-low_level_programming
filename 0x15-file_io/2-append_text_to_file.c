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


    if (filename == NULL)
        return (-1);

    if (text_content != NULL) {
        while (text_content[text_length] != '\0')
            text_length++;

    file_descriptor = open(filename, O_WRONLY | O_APPEND);

   bytes_written = write(file_descriptor, text_content, text_length);


    if (file_descriptor == -1 || bytes_written == -1)
        return (-1);

    close(file_descriptor);

    return (1);
}
}
