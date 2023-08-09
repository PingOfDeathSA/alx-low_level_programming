#include "main.h"

/**
 * _memcpy - copies memory area
 * @my_destination: memory where data is stored
 * @my_source: memory where data is copied from
 * @num_bytes: number of bytes to copy
 *
 * Result: Copied memory with num_bytes changed
 */
char *_memcpy(char *my_destination, char *my_source, unsigned int num_bytes)
{
int my_index = 0;
int my_copy_count = num_bytes;

for (; my_index < my_copy_count; my_index++)
{
my_destination[my_index] = my_source[my_index];
num_bytes--;
}
return (my_destination);
}
