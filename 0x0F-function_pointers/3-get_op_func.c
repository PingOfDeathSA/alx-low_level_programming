#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Retrieves the appropriate operation function based on input.
 * @s: The operator provided as an argument.
 *
 * This function takes an operator 's' as input and returns a function pointer
 * to the corresponding arithmetic operation function. It looks through an array
 * of operator-function pairs to find the matching operation.
 *
 * Return: A function pointer to the operation function corresponding to 's'.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", &op_add},
        {"-", &op_sub},
        {"*", &op_mul},
        {"/", &op_div},
        {"%", &op_mod},
        {NULL, NULL}
    };

    int intnum = 0;

    // Find the appropriate operation by iterating through the operator-function pairs
    while (ops[intnum].op != NULL && *ops[intnum].op != *s)
        intnum++;

    // Return the function pointer associated with the chosen operation
    return (ops[intnum].f);
}
