#include "function_pointers.h"
#include <stdio.h>
/**
 * Function: Iterate through an array and perform an action on each element.
 * 
 * This function takes an array, its size, and a pointer to an action function as parameters.
 * It iterates through the array and applies the specified action to each element.
 * 
 * @param array: The array to be iterated through.
 * @param size: The number of elements in the array.
 * @param action: A function pointer to perform an action on each element.
 * @return: No explicit return value.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int checker;

	if (action == NULL || array == NULL)
		return;
	for (checker = 0; checker < size; checker++)
	{
	action(array[i]);
	}
}

