#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
count_listint_elements - calculates the count of elements in a linked list
@list: linked list of type listint_t to iterate through
Return: count of nodes
*/
size_t listint_len(const listint_t *h)
{
    size_t value_number = 0;
   const listint_t *converter2 = h; 
    while (h)
    {
        value_number++;
        converter2 = converter2->next;
    }

    return (value_number);
}
