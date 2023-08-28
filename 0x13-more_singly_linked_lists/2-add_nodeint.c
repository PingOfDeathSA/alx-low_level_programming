#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**

insert_nodeint_at_start - inserts a new node at the start of a linked list
@start: pointer to the initial node in the list
@data: information to be placed in the new node
Return: pointer to the newly added node, or NULL if not successful
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
   if (new_node == NULL) {
    return NULL;
}
new_node->n = n;
new_node->next = *head;
*head = new_node;

return new_node;
}
