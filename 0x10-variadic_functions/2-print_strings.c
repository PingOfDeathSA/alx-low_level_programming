#include "variadic_functions.h"
#include <stddef.h>
/**
 * display_list_strings - outputs a series of list_strings
 * @separator: the separator used between list_strings
 * @n: count of arguments
 */
void print_list_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_strings;
	char *str;
	unsigned int i_ndex;

	va_start(list_strings, n);

	for (i_ndex = 0; i_ndex < n; i_ndex++)
	{
		str = va_arg(list_strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i_ndex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list_strings);
}
