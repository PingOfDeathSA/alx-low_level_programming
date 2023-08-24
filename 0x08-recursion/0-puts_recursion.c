	
#include "main.h"
/**
 * _puts_recursion - Performs a function comparable to puts();
 * @s: Input string to be processed.
 * Return: Always 0 to indicate success.
 */

void _puts_recursion(char *Success)
{
	if (*Success)
	{
		_putchar(*Success);
		_puts_recursion(Success + 1);
	}

	else
		_putchar('\n');
}

