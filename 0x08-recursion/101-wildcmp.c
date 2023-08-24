#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @new_string1: Pointer to the first string parameter.
 * @new_string2: Pointer to the second string parameter.
 * 
 * Return: Always returns 0.
 */


int wildcmp(char *new_string1, char *new_string2)
{
	if (*new_string1 == '\0')
	{
		if (*new_string2 != '\0' && *new_string2 == '*')
		{
			return (wildcmp(new_string1, new_string2 + 1));
		}
		return (*new_string2 == '\0');
	}

	if (*new_string2 == '*')
	{
		return (wildcmp(new_string1 + 1, new_string2) || wildcmp(new_string1, new_string2 + 1));
	}
	else if (*new_string1 == *new_string2)
	{
		return (wildcmp(new_string1 + 1, new_string2 + 1));
	}
	return (0);
}
