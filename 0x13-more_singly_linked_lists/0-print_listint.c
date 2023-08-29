#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - displays the elements of a linked list
 * @h: linked list of type listint_t to be displayed
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *converter = h;
size_t value_num = 0;
while (converter)
{
printf("%d\n", converter->n);
value_num++;
converter = converter->next;
}
return (value_num);
}
