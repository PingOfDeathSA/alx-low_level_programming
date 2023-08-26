#include <stdlib.h>
#include "dog.h"

/**
@d: pointer to the 'struct dog' variable to be initialized
@name: the name for initialization
@age: the age for initialization
@owner: the owner for initialization
*/
void init_dog(struct dog *dog_value, char *name, float age, char *owner)
{
	if (dog_value == NULL)
		dog_value = malloc(sizeof(struct dog));
	dog_value->name = name;
	dog_value->age = age;
	dog_value->owner = owner;
}
