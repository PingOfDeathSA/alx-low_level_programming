#include "main.h"

int actual_prime(int new_n, int new_i);

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @new_n: The number to be evaluated.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */

int is_prime_number(int new_n)
{
	if (new_n <= 1)
		return (0);
	return (actual_prime(new_n,new_n - 1));
}

/**
 * actual_prime - Recursively determines if a number is prime.
 * @new_n: The number to be evaluated.
 * @new_i: An iterator used in the recursion.
 *
 * Return: 1 if n is prime, 0 if it is not.
 */

int actual_prime(int new_n, int new_i)
{
	if (new_i == 1)
		return (1);
	if (new_n % new_i == 0 && new_i > 0)
		return (0);
	return (actual_prime(new_n, new_i - 1));
}




