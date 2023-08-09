#include "main.h"

/**
 * _strcpy - Copy a string
 * @target: Destination to copy to
 * @source: Source to copy from
 * Return: Pointer to the copied string
 */
char *_strcpy(char *target, char *source)
{
int source_length = 0;
int copy_index = 0;
while (*(source + source_length) != '\0')
{
source_length++;
}
for (; copy_index < source_length ; copy_index++)
{
target[copy_index] = source[copy_index];
}
	
target[source_length] = '\0';
	
return (target);
}

