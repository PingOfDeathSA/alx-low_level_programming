
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own instructions.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * This function prints the machine instructions (opcodes) of its own code.
 * It takes the arguments 'argc' and 'argv', but they are not used in this context.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int bites, intnum;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bites = atoi(argv[1]);

	if (bites < 0)
	{
printf("Error\n");
exit(2);
}
array = (char *)main;
for (intnum = 0; intnum < bites; intnum++)
{
if (intnum == bites - 1)
{
printf("%02hhx\n", array[intnum]);
break;
}
printf("%02hhx ", array[intnum]);
}
return (0);
}
