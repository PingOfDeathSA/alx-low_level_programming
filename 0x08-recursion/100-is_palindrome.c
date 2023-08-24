#include "main.h"

int check_pal(char *new_s, int new_i, int new_len);
int _strlen_recursion(char *new_s);

/**
 * is_palindrome - Verifies whether a string is a palindrome.
 * @new_s: The string to be checked.
 * 
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */

int is_palindrome(char *new_s)
{
	if (*new_s == 0)
		return (1);
	return (check_pal(new_s, 0, _strlen_recursion(new_s)));
}

/**
 * _strlen_recursion - Computes the length of a string.
 * @s: The string for which the length is to be calculated.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *new_s)
{
	if (*new_s == '\0')
		return (0);
	return (1 + _strlen_recursion(new_s + 1));
}

/**
 * check_pal - Recursively verifies characters for palindrome properties.
 * @new_s: The string to be checked.
 * @new_i: An iterator used in the recursion.
 * @new_len: The length of the string.
 * 
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */

int check_pal(char *new_s, int new_i, int new_len)
{
	if (*(new_s + new_i) != *(new_s + new_len - 1))
		return (0);
	if (new_i >= new_len)
		return (1);
	return (check_pal(new_s, new_i + 1, new_len - 1));
}

