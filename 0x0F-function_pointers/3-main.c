#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Executes basic arithmetic calculations using user-provided input.
 * @argc: The count of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    int firstNumber, secondNumber;
    char *operator;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    firstNumber = atoi(argv[1]);
    operator = argv[2];
    secondNumber = atoi(argv[3]);

    if (get_op_func(operator) == NULL || operator[1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    if ((*operator == '/' && secondNumber == 0) ||
        (*operator == '%' && secondNumber == 0))
    {
        printf("Error\n");
        exit(100);
    }

    int result = get_op_func(operator)(firstNumber, secondNumber);
    printf("%d\n", result);

    return (0);
}

