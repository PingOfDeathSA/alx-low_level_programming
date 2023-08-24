#include <stdlib.h>
#include "lists.h"

/**

*list_len - Calculates the count of elements in a linked list.
*@h: Pointer to the list_t list.
*Return: The count of elements in the list.
*/
size_t list_len(const list_t *head)
{
	size_t nmuber = 0;

	while (head)
	{
		nmuber++;
		head = head->next;
	}
	return (nmuber);
}
