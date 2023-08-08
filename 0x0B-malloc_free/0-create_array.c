#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *String1;
unsigned int i;
String1 = malloc(sizeof(char) * size);
if (size == 0 || String1 == NULL)
return (NULL);
for (i = 0; i < size; i++)
String1[i] = c;
return (String1);
}

