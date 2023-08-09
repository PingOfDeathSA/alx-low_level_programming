#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @target: starting address of memory to be filled
 * @value: the desired value
 * @num_bytes: number of bytes to be changed
 *
 * Result: Changed array with the new value for num_bytes
 */
char *_memset(char *target, char value, unsigned int num_bytes)
{
int my_index = 0;

for (; num_bytes > 0; my_index++)
{
target[my_index] = value;
num_bytes--;
}
return (target);
}
