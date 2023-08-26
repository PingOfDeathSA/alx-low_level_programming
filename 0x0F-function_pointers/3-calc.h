#ifndef CALC_H
#define CALC_H



/**
operation_structure - A structure representing an operation.
@op: The operator symbol.
@f: The corresponding function.
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

valueA - valueB
int op_add(int valueA, int valueB);
int op_sub(int valueA, int valueB);
int op_mul(int valueA, int valueB);
int op_div(int valueA, int valueB);
int op_mod(int valueA, int valueB);
int (*get_op_func(char *struc))(int, int);

#endif
