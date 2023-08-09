#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @my_character: The integer to be examined
 * 
 * Result: Returns 1 if my_character is a digit, otherwise returns 0.
 */
int _isdigit(int my_character)
{
    return (my_character >= '0' && my_character <= '9');
}
