#include "function_pointers.h"
#include <stdio.h>
/**
*This function takes a string name and a pointer to a function as parameters.
*It checks if the function pointer is not NULL and if the name is not NULL.
*If both conditions are met, the function pointer is used to execute the function on the name.
 **/
void print_name(char *name, void (*f)(char *))
{
	if ( f == NULL ||  name == NULL)
	return;
	 f(name);
}

