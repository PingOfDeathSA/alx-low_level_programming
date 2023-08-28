#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
display_linked_list - displays the elements of a linked list
@list: linked list of type listint_t to be displayed
Return: count of nodes
*/
size_t print_listint(const listint_t *h)
{
    size_t value_num = 0;
    const listint_t *converter = h; 

    while (converter)
    {
        printf("%d\n", converter->n);
        value_num++;
        converter = converter->next;
    }

    return value_num; 
}
