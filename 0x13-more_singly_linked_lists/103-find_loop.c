#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
locate_listint_loop - detects a loop within a linked list
@head: linked list to examine
Return: address of the node where the loop initiates, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;

if (!head)
    return NULL;

while (tortoise && hare && hare->next)
{
    hare = hare->next->next;
    tortoise = tortoise->next;
    
    if (hare == tortoise)
    {
        tortoise = head;
        while (tortoise != hare)
        {
            tortoise = tortoise->next;
            hare = hare->next;
        }
        return hare;
    }
}

return NULL;

}
