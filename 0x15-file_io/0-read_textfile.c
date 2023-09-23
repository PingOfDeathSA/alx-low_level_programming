#include "main.h"
#include <stdlib.h>

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
	char *x_buff;
	ssize_t directory_file;
	ssize_t rite;
	ssize_t leta;
	directory_file = open(filename, O_RDONLY);
	if (directory_file == -1)
		return (0);
	x_buff = malloc(sizeof(char) * letters);
	leta = read(directory_file, x_buff, letters);
	rite = write(STDOUT_FILENO, x_buff, leta);
	free(x_buff);
	close(directory_file);
	return (rite);
}

