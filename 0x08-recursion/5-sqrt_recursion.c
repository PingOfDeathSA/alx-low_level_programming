#include "main.h"

int actual_sqrt_recursion(int new_n, int new_i);

/**
 * _sqrt_recursion - Computes the square root of a given number.
 * @new_n: The number for which the square root is to be calculated.
 *
 * Return: The calculated square root.
 */

int _sqrt_recursion(int new_n)
{
	if (new_n < 0)
		return (-1);
	return (actual_sqrt_recursion(new_n, 0));
}
/**
 * actual_sqrt_recursion - Recursively calculates the natural square root of a number.
 * @new_n: The number for which the square root is calculated.
 * @new_i: An iterator used in the recursion.
 *
 * Return: The calculated square root.
 */

int actual_sqrt_recursion(int new_n, int new_i)
{
	if (new_i * new_i > new_n)
		return (-1);
	if (new_i * new_i == new_n)
		return (new_i);
	return (actual_sqrt_recursion(new_n, new_i + 1));
}

