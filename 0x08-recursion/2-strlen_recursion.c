
#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string.
 * @new_string: The string to be evaluated.
 *
 * Return: The length of the input string.
 */
int _strlen_recursion(char *new_string)
{
	int lG = 0;

	if (*new_string)
	{
		lG++;
		lG += _strlen_recursion(new_string + 1);
	}

	return (lG);
}

