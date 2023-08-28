#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
release_listint2 - deallocates a linked list
@head: pointer to the listint_t list to be deallocated
*/
void free_listint2(listint_t **head)
{
    listint_t *tp;
if (head != NULL) {
    while (*head != NULL) {
        tp = (*head)->next;
        free(*head);
        *head = tp;
    }
    
    *head = NULL;
}
}
