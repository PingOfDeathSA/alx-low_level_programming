#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to some memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *dupli;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
dupli = malloc(sizeof(char) * (i + 1));
if (dupli == NULL)
return (NULL);
for (r = 0; str[r]; r++)
dupli[r] = str[r];
return (dupli);
}
