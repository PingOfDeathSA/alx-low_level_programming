#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * has_only_digits - Check if a string contains only digits
 * @str: The input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int has_only_digits(char *str)
{
	unsigned int index = 0;

	while (index < strlen(str))
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}

		index++;
	}
	return (1);
}

/**
 * main - Calculate the sum of integer arguments
 * @arg_count: Count of arguments
 * @arg_values: Array of argument values
 *
 * Return: Always 0 (Success)
 */
int main(int arg_count, char *arg_values[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < arg_count)
	{
		if (has_only_digits(arg_values[count]))
		{
			str_to_int = atoi(arg_values[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}

