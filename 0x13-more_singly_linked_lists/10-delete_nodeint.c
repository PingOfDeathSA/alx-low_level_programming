#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**

eliminate_nodeint_at_index - Erases a specific node from the linked list at a given position.
@head: Pointer indicating the start of the list.
@index: Position of the node to be erased.
Return: Returns 1 if successful, or -1 if the operation is unsuccessful.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temporary = *head; 
listint_t *previous = NULL; 
unsigned int position = 0; 


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (position < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		position++;
	}


	previous = temporary->next;
	temporary->next = previous->next;
	free(previous);

	return (1);
}

