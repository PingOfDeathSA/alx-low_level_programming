	
#include "main.h"
#include <unistd.h>
/**
 * _putchar - Outputs the character c to the standard output.
 * @c: The character to be printed.
 * 
 * Return: Returns 1 upon success.
 * Returns -1 on error, and sets the appropriate errno value.
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}

