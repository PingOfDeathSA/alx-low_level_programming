#include "main.h"

/**
 * print_binary - Displays the binary representation of a decimal number.
 * @n: The decimal number to be displayed in binary.
 */
void print_binary(unsigned long int n)
{
	int indexing, value_ount = 0;
	unsigned long int temp;

	for (indexing = 63; indexing >= 0; indexing--)
	{
		temp = n >> indexing;

		if (temp & 1)
		{
			_putchar('1');
			value_ount++;
		}
		else if (value_ount)
			_putchar('0');
	}
	if (!value_ount)
		_putchar('0');
}
