#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *s_1)
{
    int i_1 = 0;

    while (s_1[i_1] != '\0')
    {
        i_1++;
    }

    return i_1;
}

/**
 * *_strcpy - copies the content of one string into another
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest_1, char *src_1)
{
    int len = 0;
    int i_1;

    while (src_1[len] != '\0')
    {
        len++;
    }

    for (i_1 = 0; i < len; i_1++)
    {
        dest_1[i_1] = src_1[i_1];
    }
    dest_1[i_1] = '\0';

    return dest_1;
}

/**
 * new_dog - creates a new dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog structure (Success), NULL otherwise
 */
dog_t *new_dog(char *name_1, float age_1, char *owner_1)
{
    dog_t *dog_1;
    int name_len, owner_len;

    name_len = _strlen(name_1);
    owner_len = _strlen(owner_1);

    dog_1 = malloc(sizeof(dog_t));
    if (dog_1 == NULL)
        return NULL;

    dog_1->name_1 = malloc(sizeof(char) * (name_len + 1));
    if (dog_1->name_1 == NULL)
    {
        free(dog_1);
        return NULL;
    }

    dog_1->owner_1 = malloc(sizeof(char) * (owner_len + 1));
    if (dog_1->owner_1 == NULL)
    {
        free(dog_1);
        free(dog_1->name_1);
        return NULL;
    }

    _strcpy(dog_1->name_1, name_1);
    _strcpy(dog_1->owner_1, owner_1);
    dog_1->age_1 = age_1;

    return dog_1;
}


