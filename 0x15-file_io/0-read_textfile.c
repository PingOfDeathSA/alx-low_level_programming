#include "main.h"
#include <stdlib.h>

/**
 * Function: read_textfile
 * Purpose: Reads the content of a text file and outputs it to the standard output.
 * 
 * @param filename: The name of the text file to be read.
 * @param letters: The number of characters to be read.
 * @return: The actual number of bytes read and printed, denoted as 'w'.
 *         Returns 0 in case of function failure or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bffer;
	ssize_t fileD;
	ssize_t x;
	ssize_t y;

	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
		return (0);
	bffer = malloc(sizeof(char) * letters);
	y = read(fileD, bffer, letters);
	x = write(STDOUT_FILENO, bffer, y);

	free(bffer);
	close(fileD);
	return (x);
}
