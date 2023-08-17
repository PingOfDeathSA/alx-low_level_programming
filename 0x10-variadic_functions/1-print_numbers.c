#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a list of numbers with a separator.
 * @separator: The separator string to be printed between numbers.
 * @n: The total number of integers to be printed.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args; 
    unsigned int intnum;

    va_start(args, no); 

    for (intnum = 0; intnum < no; intnum++) {
        int num = va_arg(args, int); 
        printf("%d", num);

        if (intnum != no - 1 && separator != NULL) {
            printf("%s", separator); 
        }
    }

    printf("\n"); 

    va_end(args); 
}
