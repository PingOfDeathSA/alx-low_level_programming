#include "3-calc.h"

// Function prototypes for arithmetic operations
int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);

/**
 * add - Adds two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Returns: The sum of num1 and num2.
 */
int op_sub(int num1, int num2)
{
    return (num1 + num2);
}

/**
 * subtract - Subtracts two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Returns: The difference between num1 and num2.
 */
int op_sub(int num1, int num2)
{
    return (num1 - num2);
}

/**
 * multiply - Multiplies two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Returns: The product of num1 and num2.
 */
int op_mul(int num1, int num2)
{
    return (num1 * num2);
}

/**
 * divide - Divides two numbers.
 * @num1: The first number (dividend).
 * @num2: The second number (divisor).
 *
 * Returns: The result of dividing num1 by num2.
 */
int op_div(int num1, int num2)
{
    return (num1 / num2);
}

/**
 * find_remainder - Computes the remainder of division.
 * @num1: The first number (dividend).
 * @num2: The second number (divisor).
 *
 * Returns: The remainder of dividing num1 by num2.
 */
int op_mod(int num1, int num2)
{
    return (num1 % num2);
}

