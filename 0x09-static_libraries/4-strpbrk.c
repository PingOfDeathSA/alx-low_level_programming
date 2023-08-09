#include "main.h"

/**
 * _strpbrk - Locate the first occurrence in a string of any character from a set
 * @source: The source string
 * @char_set: The set of characters to search for
 * Return: Pointer to the first matching character or NULL if not found
 */
char *_strpbrk(char *source, char *char_set)
{
int set_index;
while (*source)
{
for (set_index = 0; char_set[set_index]; set_index++)
{
if (*source == char_set[set_index])
return (source);
}
source++;
}
return ('\0');
}

