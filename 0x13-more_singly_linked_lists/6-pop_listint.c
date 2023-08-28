#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
remove_head_listint - removes the initial node of a linked list
@head: pointer to the first element in the linked list
Return: the data stored in the removed node,
or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
  listint_t *temporary_node;
int value;

if (head == NULL || *head == NULL)
    return 0;

value = (*head)->n;
temporary_node = (*head)->next;
free(*head);
*head = temporary_node;

return value;;
}
