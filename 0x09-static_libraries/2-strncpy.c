#include "main.h"

/**
 * _strncpy - Copy a string
 * @target: Destination value
 * @source: Source value
 * @max_chars: Maximum number of characters to copy
 *
 * Return: target
 */
char *_strncpy(char *target, char *source, int max_chars)
{
int copy_index;

copy_index = 0;
while (copy_index < max_chars && source[copy_index] != '\0')
{
target[copy_index] = source[copy_index];
copy_index++;
}
while (copy_index < max_chars)
{
target[copy_index] = '\0';
copy_index++;
}
return (target);
}
