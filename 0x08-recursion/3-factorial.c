#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @new_number: The number for which the factorial is calculated.
 * 
 * Return: The factorial of n.
 */
int factorial(int new_number)
{
	if (new_number < 0)
		return (-1);
	if (new_number == 0)
		return (1);
	return (new_number * factorial(new_number - 1));
}

