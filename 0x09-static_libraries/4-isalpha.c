#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic character
 * @ch: The character to be checked
 * Return: 1 if ch is a letter, 0 otherwise
 */
int _isalpha(int ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

