#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * perform_addition - computes the total of two integers

 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
return (a - b);
}

int op_mul(int a, int b)
{
return (a * b);
}

int op_div(int a, int b)
{
return (a / b);
}

int op_mod(int a, int b)
{
return (a % b);
}

