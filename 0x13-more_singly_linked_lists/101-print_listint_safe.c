#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**

display_safe_listint - securely prints a linked list
@head: list of type listint_t to be displayed
Return: count of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
 size_t count = 0;
ptrdiff_t distance;

while (head)
{
    distance = (ptrdiff_t)(head - head->next);
    count++;
    printf("[%p] %d\n", (void *)head, head->n);
    
    if (distance > 0)
        head = head->next;
    else
    {
        printf("-> [%p] %d\n", (void *)head->next, head->next->n);
        break;
    }
}

return count;
}
