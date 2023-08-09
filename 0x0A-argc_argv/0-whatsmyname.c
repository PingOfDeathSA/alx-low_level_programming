#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @arg_count: Number of arguments
 * @arg_values: Array of argument values
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count __attribute__((unused)), char *arg_values[])
{
printf("%s\n", *arg_values);
return (0);
}

