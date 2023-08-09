#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @arg_count: Number of arguments
 * @arg_values: Array of argument values
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *arg_values[])
{
int index;

for (index = 0; index < arg_count; index++)
{
printf("%s\n", arg_values[index]);
}

return (0);
}
