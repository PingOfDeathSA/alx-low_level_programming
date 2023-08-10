#include "main.h"
#include <unistd.h>

/**
 * _print_char - outputs the character c to the standard output
 * @c: The character to be displayed
 *
 * Return: Returns 1 upon success.
 * If an error occurs, -1 is returned, and the error status is set accordingly.
 */
int _print_char(char ch)
{
return (write(1, &ch, 1));
}


