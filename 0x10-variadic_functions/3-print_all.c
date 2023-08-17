#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints data of various types based on the format string.
 * @format: A format string containing format specifiers for the data.
 *
 * Description: This function accepts a variable number of arguments
 *              of different types and prints them based on the format
 *              specifiers provided in the format string.
 */
void print_all(const char * const format, ...)
{
    int index = 0;
    char *str, *separator = "";

    va_list args;

    va_start(args, format); 

    if (format)
    {
        while (format[index])
        {
            switch (format[index])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(args, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(args, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(args, double));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", separator, str);
                    break;
                default:
                    index++;
                    continue;
            }
            separator = ", ";
            index++;
        }
    }

    printf("\n"); 

    va_end(args); 
}

