#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @input_str: input
 * @target_char: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *input_str, char target_char)
{
int search_index = 0;

for (; input_str[search_index] >= '\0'; search_index++)
{
if (input_str[search_index] == target_char)
return (&input_str[search_index]);
}
return (0);
}

