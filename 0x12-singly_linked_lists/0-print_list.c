#include <stdio.h>
#include "lists.h"

/**

print_list - Outputs all elements of a linked list.
@h: Pointer to the list_t list for printing.
Return: The count of printed nodes.
*/
size_t print_list(const list_t *head)
{
	size_t size = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		size++;
	}

	return (size);
}

