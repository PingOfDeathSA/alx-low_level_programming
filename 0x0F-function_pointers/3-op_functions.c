#include "3-calc.h"

int op_add(int first, int second);
int op_sub(int first, int second);
int op_mul(int first, int second);
int op_div(int first, int second);
int op_mod(int first, int second);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * This function takes two input numbers, 'a' and 'b', and calculates their sum.
 * The result is then returned as the output of the function.
 *
 * Return: The sum of 'a' and 'b'.
 */

int op_add(int first, int second)
{
	return (first + second);
}

int op_sub(int first, int second)
{
	return (first - second);
}

int op_mul(int first, int second)
{
	return (first * second);
}

int op_div(int first, int second)
{
	return (first / second);
}

int op_mod(int first, int second)
{
	return (first % second);
}

