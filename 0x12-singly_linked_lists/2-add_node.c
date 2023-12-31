#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Inserts a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add in the node.
 * 
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
    
    list_t *new_node;
    unsigned int string_length = 0;

 
    while (str[string_length])
        string_length++;

 
    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL; 

    
    new_node->str = strdup(str);
    new_node->len = string_length;
    new_node->next = (*head);


    (*head) = new_node;

    return (*head);
}




