#include "main.h"

/**
 * _atoi - Convert a string into an integer
 * @input_str: The string to convert
 * Return: The converted integer
 */
int _atoi(char *input_str)
{
int sign = 1, index = 0;
unsigned int result = 0;
while (!(input_str[index] <= '9' && input_str[index] >= '0') && input_str[index] != '\0')
{
if (input_str[index] == '-')
sign *= -1;
index++;
}
while (input_str[index] <= '9' && (input_str[index] >= '0' && input_str[index] != '\0'))
{
result = (result * 10) + (input_str[index] - '0');
index++;
}
result *= sign;
return (result);
}
