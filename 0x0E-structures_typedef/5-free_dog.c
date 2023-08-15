#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory used by a struct dog
 * @d: the struct dog to release memory for
 */
void free_dog(dog_t *d_1)
{
    if (d_1)
    {
        free(d_1->name_1);
        free(d_1->owner_1);
        free(d_1);
    }
}

