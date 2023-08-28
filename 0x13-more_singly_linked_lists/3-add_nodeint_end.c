#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**

insert_nodeint_at_tail - inserts a node at the tail of a linked list
@start: pointer to the initial element in the list
@data: information to be placed in the new element
Return: pointer to the newly added node, or NULL if not successful
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

 listint_t *current = *head;

listint_t *new_node = malloc(sizeof(listint_t));
if (!new_node)
    return NULL;

new_node->n = n;
new_node->next = NULL;

if (current == NULL) {
    *head = new_node;
    return new_node;
}

while (current->next != NULL) {
    current = current->next;
}

current->next = new_node;

return new_node;
}
