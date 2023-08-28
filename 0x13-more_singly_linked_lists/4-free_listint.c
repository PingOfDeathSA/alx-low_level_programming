#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
release_listint - deallocates a linked lis
@start: listint_t list to be deallocated
*/
void free_listint(listint_t *head)
{
    listint_t *current;

  for (; head; head = current) {
    current = head->next;
    free(head);
}
}
