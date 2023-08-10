#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a given range.
 * @min_value: Minimum value of the range.
 * @max_value: Maximum value of the range (inclusive) and number of elements.
 *
 * Returns: Pointer to the new integer array.
 */
int *array_range(int min_value, int max_value)
{
int *result_ptr;
int i, array_size;
if (min_value > max_value)
return (NULL);
array_size = max_value - min_value + 1;
result_ptr = malloc(sizeof(int) * array_size);
if (result_ptr == NULL)
return (NULL);
for (i = 0; min_value <= max_value; i++)
result_ptr[i] = min_value++;
return (result_ptr);
}


