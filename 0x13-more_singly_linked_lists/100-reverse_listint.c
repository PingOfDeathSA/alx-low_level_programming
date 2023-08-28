#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
invert_listint - changes the order of a linked list to be reversed
@head: pointer to the initial node in the list
Return: pointer to the initial node in the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_node = NULL;
listint_t *following_node = NULL;

while (*head)
{
    following_node = (*head)->next;
    (*head)->next = previous_node;
    previous_node = *head;
    *head = following_node;
}

*head = previous_node;

return *head;
}
