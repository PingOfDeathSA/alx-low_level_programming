#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @num_bytes: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int num_bytes)
{
    void *memory_ptr;

    memory_ptr = malloc(num_bytes);

    if (memory_ptr == NULL)
        exit(98);

    return (memory_ptr);
}


