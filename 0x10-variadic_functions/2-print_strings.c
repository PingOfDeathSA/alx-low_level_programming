#include "variadic_functions.h"

/**
 * display_strings - outputs a series of strings
 * @separator: the separator used between strings
 * @n: count of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int sting;
	char *sting;

	va_list sep_list;
	va_start(sep_list, n);
	for (sting = 0; sting < n; sting++)
	{
		sting = va_arg(sep_list, char *);
		if (!sting)
			sting = "(nil)";
		if (!separator)
			printf("%s", sting);
		else if (separator && sting == 0)
			printf("%s", sting);
		else
		printf("%s%s", separator, sting);
	}
	printf("\n");

	va_end(sep_list);
}
