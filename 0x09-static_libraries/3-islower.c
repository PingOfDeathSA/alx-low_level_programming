#include "main.h"

/**
 * _islower - Verify if a character is in lowercase
 * @input_char: The character to verify
 * Return: 1 if input_char is lowercase, 0 otherwise
 */
int _islower(int input_char)
{
	return (input_char >= 'a' && input_char <= 'z');
}

