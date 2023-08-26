#include "3-calc.h"

/**
get_op_func - function pointer that picks the appropriate function
to execute the operation requested by the user
@s: the operator provided by the user
Returns: pointer to the function associated with the
operator given as an input parameter
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	

int	i_nndex = 0;

	while (ops[i_nndex].op)
	{
		if (strcmp(ops[i_nndex].op, s) == 0)
			return (ops[i_nndex].f);
		i_nndex++;
	}

	return (NULL);
}
