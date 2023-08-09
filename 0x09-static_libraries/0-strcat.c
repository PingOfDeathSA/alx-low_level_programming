#include "main.h"

/**
 * _strcat - concatenates two strings
 * @target: input value
 * @source: input value
 *
 * Result: void
 */
char *_strcat(char *target, char *source)
{
int index1 = 0;
int index2 = 0;

while (target[index1] != '\0')
{
index1++;
}
    
while (source[index2] != '\0')
{
target[index1] = source[index2];
index1++;
index2++;
}

target[index1] = '\0';
return (target);
}
