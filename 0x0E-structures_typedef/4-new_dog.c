#include <stdlib.h>
#include "dog.h"

/**

_strlen - function that gives the length of a string
@structure: the string to be assessed
Return: the count of characters in the string
*/

int _strlen(char *structure)
{
    int index = 0;

    for (int i = 0; structure[i] != '\0'; i++)
    {
        if (structure[i] != '\0')
        {
            index++;
        }
    }

    return index;
}



char *_strcpy(char *dination, char *struc)
{
    int lenght = 0;

    while (struc[lenght] != '\0')
    {
        lenght++;
    }

    int lenght = 0;
    while (lenght < lenght)
    {
        dination[lenght] = struc[lenght];
        lenght++;
    }
    dination[lenght] = '\0';

    return dination;
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
int langth1, langth2;

langth1 = _strlen(name);
langth2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog != NULL)
{
    dog->name = malloc(sizeof(char) * (langth1 + 1));
    if (dog->name != NULL)
    {
        dog->owner = malloc(sizeof(char) * (langth2 + 1));
        if (dog->owner != NULL)
        {
            _strcpy(dog->name, name);
            _strcpy(dog->owner, owner);
            dog->age = age;
            return dog;
        }
        else
        {
            free(dog->name);
            free(dog);
            return NULL;
        }
    }
    else
    {
        free(dog);
        return NULL;
    }
}
else
{
    return NULL;
}

}

