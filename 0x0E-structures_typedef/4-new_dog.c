#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *struc)
{
	int index;
	index = 0;
	while (struc[index] != '\0')
	{
	index++;
	}
	return (index);
}


char *_strcpy(char *des, char *struc)
{
{
int num = 0;
for (num = 0; struc[num]; num++)
des[num] = struc[num];
des[num] = '\0';
return (des);
}
}


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int owner1, owner2;
	owner1 = _strlen(name);
	owner2 = _strlen(owner);
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	doggie->name = malloc(sizeof(char) * (owner1 + 1));
	if (doggie->name == NULL)
	{
free(doggie);
return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (owner2 + 1));
	if (doggie->owner == NULL)
	{
		free(doggie);
		free(doggie->name);
		return (NULL);
	}
	_strcpy(doggie->name, name);
	_strcpy(doggie->owner, owner);
	doggie->age = age;
	return (doggie);
}

