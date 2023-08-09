#include "main.h"

/**
 * _strcmp - Compare two string values
 * @str1: First input string
 * @str2: Second input string
 *
 * Return: Difference between corresponding characters in str1 and str2
 */
int _strcmp(char *str1, char *str2)
{
int index;

index = 0;
while (str1[index] != '\0' && str2[index] != '\0')
{
if (str1[index] != str2[index])
{
return (str1[index] - str2[index]);
}
index++;
}
return (0);
}

