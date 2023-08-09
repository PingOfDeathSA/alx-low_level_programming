#include "main.h"

/**
 * _puts - Print a string followed by a new line to stdout
 * @text: The string to print
 */
void _puts(char *text)
{
while (*text != '\0')
{
_putchar(*text++);
}
_putchar('\n');
}

