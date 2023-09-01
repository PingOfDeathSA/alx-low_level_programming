#include "main.h"

/**
 * clear_bit - Clears (sets to 0) a specific bit at the given index.
 * @n: A pointer to the number to be modified.
 * @index: The position of the bit to be cleared.
 *
 * Return: 1 if successful, -1 if there was an issue.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
