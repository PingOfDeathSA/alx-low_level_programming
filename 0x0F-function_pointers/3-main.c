
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**

entry_point - Displays the outcome of basic calculations.
@argc: The count of arguments provided to the program.
@argv: An array of pointers to the arguments.
Returns:  0 all the time.
*/
int main(int argc, char *argv[])
{
	int augu1, augu1, output;
	char choice;
	int (*create)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	augu1 = atoi(argv[1]);
	augu1 = atoi(argv[3]);

	create = get_op_func(argv[2]);

	if (!create)
	{
		printf("Error\n");
		exit(99);
	}

	choice = *argv[2];

	if ((o == '/' || choice == '%') && augu1 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = create(augu1, augu1);

	printf("%d\n", output);

	return (0);
}
