#include "variadic_functions.h"

/**
display_strings - displays a series of strings
@separator: the separator to be used between strings
@n: the count of strings to be displayed
Returns: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list listing;
unsigned int index;
char *str;
va_start(listing, n);
for (index = 0; index < n; index++)
{
str = va_arg(listing, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (index!= (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(listing);
}
