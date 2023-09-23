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
char *b_uff;
ssize_t drec_file;
ssize_t reaw_write;

drec_file = open(filename, O_RDONLY);
if (drec_file == -1)
return (0);
b_uff = malloc(sizeof(char) * letters);
lett = read(drec_file, b_uff, letters);
reaw_write = write(STDOUT_FILENO, buf, lett);

free(b_uff);
close(drec_file);
return (reaw_write);
}

