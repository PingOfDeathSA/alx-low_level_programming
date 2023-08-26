
#include <stdlib.h>
#include "dog.h"

/**
release_dog - deallocates memory reserved for a struct dog
@d: struct dog to deallocate memory for
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
