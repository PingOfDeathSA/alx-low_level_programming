#include "main.h"

/**
 * Function: create_file
 * Description: Creates a file with the specified name and writes the provided text content to it.
 *
 * @param filename: A pointer to the name of the file to be created.
 * @param text_content: A pointer to the string to write to the file.
 *
 * @return: -1 if the function fails to create the file.
 *           1 if the file creation and writing are successful.
 */

int create_file(const char *filename, char *text_content)
{
   int file_descriptor, bytes_written, text_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL) {
        while (text_content[text_length] != '\0')
            text_length++;
    }

    file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

   
    bytes_written = write(file_descriptor, text_content, text_length);

  
    if (file_descriptor == -1 || bytes_written == -1)
        return (-1);

    close(file_descriptor);

    return (1);
}


