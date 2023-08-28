#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**

release_safe_listint - deallocates a linked list
@h: pointer to the initial node in the linked list
Return: count of elements in the released list
*/

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
int difference;
listint_t *temporary_node;

if (!h || !*h)
    return 0;

while (*h)
{
    difference = (int)(*h - (*h)->next);
    
    if (difference > 0)
    {
        temporary_node = (*h)->next;
        free(*h);
        *h = temporary_node;
        count++;
    }
    else
    {
        free(*h);
        *h = NULL;
        count++;
        break;
    }
}

*h = NULL;

return count;

}
