#include "function_pointers.h"
/**
 * Function: Find the index of an element in an array based on a comparison function.
 * 
 * This function takes an array, its size, and a pointer to a comparison function as parameters.
 * It searches through the array and uses the comparison function to find an element.
 * If the comparison function returns true for an element, the index of that element is returned.
 * If no element satisfies the condition, -1 is returned.
 * 
 * @param array: The array to be searched.
 * @param size: The number of elements in the array.
 * @param cmp: A pointer to a comparison function.
 * @return: The index of the found element if true, otherwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int size_Checker;

if (cmp <= 0 || size == NULL || array == NULL )
return (-1);
for (size_Checker = 0; size_Checker < size; size_Checker++)
{
if (cmp(array[size_Checker]))
return (size_Checker);
}
return (-1);
}
