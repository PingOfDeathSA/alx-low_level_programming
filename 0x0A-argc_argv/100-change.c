#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculate the minimum number of coins needed for change
 * @arg_count: Count of arguments
 * @arg_values: Array of argument values
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int arg_count, char *arg_values[])
{
	int amount, j, coin_count, result;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (arg_count != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(arg_values[1]);
	result = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && amount >= 0; j++)
	{
		while (amount >= coin_values[j])
		{
			result++;
			amount -= coin_values[j];
		}
	}

	printf("%d\n", result);
	return (0);
}

