#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - displays the details of a struct dog
 * @d_1: the struct dog to be displayed
 */
void print_dog(struct dog_1 *d_1)
{
    // If the given pointer is NULL, return without printing anything
    if (d_1 == NULL)
        return;

    // Set default values if name or owner pointers are NULL
    if (d_1->name_1 == NULL)
        d_1->name_1 = "(nil)";
    if (d_1->owner_1 == NULL)
        d_1->owner_1 = "(nil)";

    // Display the struct dog's name, age, and owner
    printf("Name: %s\nAge: %f\nOwner: %s\n", d_1->name_1, d_1->age, d_1->owner_1);
}

