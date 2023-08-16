
#ifndef CALC_H
#define CALC_H
/**
 * struct op - Definition of a structure named 'op'.
 * @op: The operator.
 * @f: The associated function.
 *
 * This structure defines a pair of values: an operator 'op'
 * and a function pointer 'f' that is associated with the operator.
 */

typedef struct operator
{
	char *operator;
	int (*f)(int first, int second);
} op_t;

int op_add(int first, int second);
int op_sub(int first, int second);
int op_mul(int first, int second);
int op_div(int first, int second);
int op_mod(int first, int second);
int (*get_op_func(char *structure))(int, int);

#endif

