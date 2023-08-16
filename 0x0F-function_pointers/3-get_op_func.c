#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Determines the appropriate function for executing
 *               the requested operation.
 * @s: The operator provided as an argument.
 *
 * This function takes an operator 's' as input and selects the
 * corresponding function to perform the requested operation.
 * It returns a pointer to the selected function.
 *
 * Return: A function pointer associated with the specified operator 's'.
 */

int (*get_op_func(char *Selects))(int, int)
{
	op_t operation[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int intnum = 0;

	while (operation[intnum].operation != NULL && *(operation[intnum].operation) != *Selects)
		intnum++;

	return (operation[intnum].f);
}

