#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A string that represents the binary number.
 *
 * Return: The resulting converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int pointingat = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		pointingat = 2 * pointingat + (b[index] - '0');
	}

	return (pointingat);
}

