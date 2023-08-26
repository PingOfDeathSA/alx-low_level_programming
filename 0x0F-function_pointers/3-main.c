
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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int value1, value2;
	char *choice;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(argv[1]);
	choice = argv[2];
	value2 = atoi(argv[3]);

	if ( choice[1] != '\0' || get_choice_func(choice) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*choice == '%' && value2 == 0) ||(*choice == '/' && value2 == 0) ||
	    )
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_choice_func(choice)(value1, value2));
	return (0);
}
