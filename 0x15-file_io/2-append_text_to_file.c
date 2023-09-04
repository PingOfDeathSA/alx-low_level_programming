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
	int file_o, file_w, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	file_o = open(filename, O_WRONLY | O_APPEND);
	file_w = write(file_o, text_content, text_len);

	if (file_o == -1 || file_w == -1)
		return (-1);

	close(file_o);

	return (1);

}
