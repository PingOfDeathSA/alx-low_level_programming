#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**

compute_sum_listint - evaluates the total of all data in a listint_t list
@head: initial node in the linked list
Return: computed summation
*/
int sum_listint(listint_t *head)
{
   int total_sum = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
    total_sum += current_node->n;
    current_node = current_node->next;
}

return total_sum;
}
