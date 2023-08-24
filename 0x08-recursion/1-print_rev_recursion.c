
#include "main.h"
 /** _print_rev_recursion - Prints a string in reverse.
 * @new_string: The string to be printed.
 */
void _print_rev_recursion(char *new_string)
{
	if (*new_string)
	{
		_print_rev_recursion(new_string + 1);
		_putchar(*new_string);
	}
}

