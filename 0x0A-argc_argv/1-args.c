#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments passed to the program
 * @arg_count: Number of arguments
 * @arg_values: Array of argument values
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *arg_values[])
{
(void) arg_values; /* Ignore arg_values */
printf("%d\n", arg_count - 1);

return (0);
}

