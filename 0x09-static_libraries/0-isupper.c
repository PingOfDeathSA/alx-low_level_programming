#include "main.h"

/**
 * _isupper - checks if a character is an uppercase letter
 * @ch: The character to check
 *
 * Result: Returns 0 if ch is not an uppercase letter, otherwise 1.
 */
int _isupper(int ch)
{
if (ch >= 'A' && ch <= 'Z')
return (1);
else
return (0);
}
