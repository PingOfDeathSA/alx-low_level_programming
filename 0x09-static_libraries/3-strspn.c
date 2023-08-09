#include "main.h"

/**
 * _strspn - Calculate the length of a prefix substring
 * @source: The source string
 * @match_set: The set of characters to match
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *source, char *match_set)
{
unsigned int prefix_length = 0;
int match_index;

while (*source)
{
for (match_index = 0; match_set[match_index]; match_index++)
{
if (*source == match_set[match_index])
{
prefix_length++;
break;
}
else if (match_set[match_index + 1] == '\0')
return (prefix_length);
}
source++;
}
return (prefix_length);
}

