#include "main.h"
#include <stdlib.h>

/**
argstostr - Entry point of the function
@ac: Integer input representing the count of arguments
@av: Double pointer array containing the arguments
Return: Returns 0
*/

char *argstostr(int ac, char **av)
{
int i_value, n_value, r = 0, l = 0;
char *string;
if (ac == 0 || av == NULL)
return (NULL);
for (i_value = 0; i_value < ac; i++)
{
for (n_value = 0; av[i_value][n_value]; n++)
l++;
}
l += ac;
string = malloc(sizeof(char) * l + 1);
if (string == NULL)
return (NULL);
for (i_value = 0; i_value < ac; i_value++)
{
for (n_value = 0; av[i_value][n_value]; n++)
{
string[r] = av[i_value][n_value];
r++;
}
if (string[r] == '\0')
{
string[r++] = '\n';
}
}
return (string);
}
