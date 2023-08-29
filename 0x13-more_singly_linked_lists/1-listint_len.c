#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
count_listint_elements - calculates the count of elements in a linked list
@list: linked list of type listint_t to iterate through
Return: count of nodes
*/
size_t listint_len(const listint_t *h)
{
 	size_t value_x = 0;

	while (h)
	{
		value_x++;
		h = h->next;
	}

	return (value_x);
}
