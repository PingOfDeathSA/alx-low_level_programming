#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to be summed.
 *
 * Return: If n is 0, returns 0.
 *         Otherwise, returns the sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;          
    unsigned int numint, sum = 0;

    va_start(args, n);     

    for (numint = 0; numint < n; numint++) {
        int num = va_arg(args, int); 
        sum += num;         
    }

    va_end(args);          

    return sum;            
}

