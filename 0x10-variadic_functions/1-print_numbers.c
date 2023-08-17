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
    unsigned int i;

    va_start(args, n); 

    for (i = 0; i < n; i++) {
        int num = va_arg(args, int);
        printf("%d", num);

        if (i != n - 1 && separator != NULL) {
            printf("%s", separator); 
        }
    }

    printf("\n"); 

    va_end(args); 
}

