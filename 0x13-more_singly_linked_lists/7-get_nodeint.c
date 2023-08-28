#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
accss_nodeint_at_index - provides the node at a specified position in a linked list
@head: initial node in the linked list
@index: position of the desired node
Return: pointer to the targeted node, or NULL if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int position = 0;
listint_t *temporary = head;

while (temporary != NULL && position < index)
{
    temporary = temporary->next;
    position++;
}
return (temporary != NULL ? temporary : NULL);
}
