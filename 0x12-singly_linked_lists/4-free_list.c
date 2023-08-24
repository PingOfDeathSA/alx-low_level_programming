#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Releases memory occupied by a linked list.
 * @head: list_t list to be deallocated.
 */

void free_list(list_t *h)
{
	list_t *T;

	while (h)
	{
		T = h->next;
		free(h->str);
		free(h);
		h = T;
	}
}

