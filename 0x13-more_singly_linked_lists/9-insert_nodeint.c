#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
add_nodeint_at_specific_index - adds a fresh node to a linked list,
at a specified position
@head: pointer to the initial node in the list
@idx: index where the new node is inserted
@n: data to be placed in the new node
Return: pointer to the newly added node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int index;
listint_t *new_node;
listint_t *current_node = *head;


	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (index = 0; current_node && index < idx; index++)
	{
		if (index == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);

}


