#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Displays the details of a struct dog.
 * @d: The struct dog whose details will be displayed.
 */
void print_dog(struct dog *d)
{
if (d != NULL) {
    if (d->name != NULL) {
        printf("Name: %s\n", d->name);
    } else {
        printf("Name: (nil)\n");
    }

    if (d->age >= 0) {
        printf("Age: %.1f\n", d->age);
    } else {
        printf("Age: (nil)\n");
    }

    if (d->owner != NULL) {
        printf("Owner: %s\n", d->owner);
    } else {
        printf("Owner: (nil)\n");
    }
} else {
    return ;
}
}
