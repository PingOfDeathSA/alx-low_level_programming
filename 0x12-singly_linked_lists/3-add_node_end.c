#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Inserts a new node at the tail of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: String to be stored in the new node.
 * 
 * Returns: The address of the newly added element, or NULL if the operation fails.
 */

list_t *add_node_end(list_t **head, const char *str)
 {
    list_t *new_node;
    list_t *temp = *head;
    unsigned int str_length = 0;

    
    while (str[str_length])
        str_length++;


    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL; 

    /*Copy the string and set node attributes*/ 
    new_node->str = strdup(str);
    new_node->len = str_length;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return new_node;
    }

 
    while (temp->next)
        temp = temp->next;


    temp->next = new_node;

    return new_node;
}






