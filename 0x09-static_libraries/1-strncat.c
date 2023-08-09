#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @my_dest: input value
 * @my_src: input value
 * @max_bytes: input value
 *
 * Result: my_dest after concatenating my_src up to max_bytes
 */
char *_strncat(char *my_dest, char *my_src, int max_bytes)
{
int my_index1 = 0;
int my_index2 = 0;
while (my_dest[my_index1] != '\0')
{
my_index1++;
}
    
while (my_index2 < max_bytes && my_src[my_index2] != '\0')
{
my_dest[my_index1] = my_src[my_index2];
my_index1++;
my_index2++;
}
my_dest[my_index1] = '\0';
return (my_dest);
}

