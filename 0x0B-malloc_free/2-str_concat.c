
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of string1 and string2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ci;
if (string1 == NULL)
string1 = "";
if (string2 == NULL)
string2 = "";

i = ci = 0;
while (string1[i] != '\0')
i++;
while (string2[ci] != '\0')
ci++;
conct = malloc(sizeof(char) * (i + ci + 1));
if (conct == NULL)
return (NULL);
i = ci = 0;
while (string1[i] != '\0')
{
conct[i] = string1[i];
i++;
}
while (string2[ci] != '\0')
{
conct[i] = string2[ci];
i++, ci++;
}
conct[i] = '\0';
return (conct);
}

