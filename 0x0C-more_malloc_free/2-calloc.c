#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills a memory area with a specific character.
 * @dest: Pointer to the memory area to be filled.
 * @ch: Character to be copied.
 * @num: Number of times to copy the character.
 *
 * Returns: Pointer to the filled memory area.
 */
char *_memset(char *dest, char ch, unsigned int num)
{
unsigned int i;

for (i = 0; i < num; i++)
{
dest[i] = ch;
}
return (dest);
}

/**
 * _calloc - Allocates memory for an array and initializes to zero.
 * @num_elements: Number of elements in the array.
 * @element_size: Size of each element.
 *
 * Returns: Pointer to the allocated and initialized memory.
 */
void *_calloc(unsigned int num_elements, unsigned int element_size)
{
char *ptr;

if (num_elements == 0 || element_size == 0)
return (NULL);
ptr = malloc(element_size * num_elements);
if (ptr == NULL)
 return (NULL);
_memset(ptr, 0, num_elements * element_size);
 return (ptr);
}


