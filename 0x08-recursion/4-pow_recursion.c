#include "main.h"
/**
 * _pow_recursion - Calculates the result of raising x to the power of y.
 * @new_x: The base value.
 * @new_y: The exponent value.
 *
 * Return: The result of x raised to the power of y.
 */

int _pow_recursion(int new_x, int new_y)
{
	if (new_y < 0)
		return (-1);
	if (new_y == 0)
		return (1);
	return (new_x * _pow_recursion(new_x, new_y - 1));
}


