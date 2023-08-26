#include <stdlib.h>
#include "dog.h"

/**
@d: pointer to the 'struct dog' variable to be initialized
@name: the name for initialization
@age: the age for initialization
@owner: the owner for initialization
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
	d = malloc(sizeof(struct dog));
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
