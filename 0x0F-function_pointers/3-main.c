#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * Main Function: Display outcomes of basic operations.
 * 
 * Entry Point Parameters:
 * @argc: Number of supplied program arguments.
 * @argv: Array of argument pointers.
 * 
 * Returns: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int Int1, Int2;
	char *Operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	Int1 = atoi(argv[1]);
	Operation = argv[2];
	Int2 = atoi(argv[3]);

	if ( Operation[1] != '\0' || get_op_func(Operation) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*Operation == '%' && Int2 == 0) ||(*Operation == '/' && Int2 == 0)
	    )
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(Operation)(Int1, Int2));

	return (0);
}

