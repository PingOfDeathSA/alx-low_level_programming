#include "main.h"

/**
 * flip_bits - Counts the number of differing bits between two numbers.
 * @n: The 1st number.
 * @m: The 2nd number.
 *
 * Return: The number of bits that need to be flipped to transform n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return count;
}

