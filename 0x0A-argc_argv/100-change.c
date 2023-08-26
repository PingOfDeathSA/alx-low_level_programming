#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**

entry_point - displays the least count of coins required to
achieve a specific monetary sum
@argc: count of args
@argv: array of args
Returns: 0 (True), 1 (False)
*/
int main(int argc, char *argv[])
{
	int value,index, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);
	output = 0;

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	for (index = 0; index < 5 && value >= 0; index++)
	{
	while (value >= coins[index])
		{
			output++;
			value -= coins[index];
		}
	}
	printf("%d\n", output);
	return (0);
}

