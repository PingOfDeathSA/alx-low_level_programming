#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets up the details of a struct dog variable
 * @D_1: pointer to the struct dog to be set up
 * @Name_1: the name to be assigned
 * @Age_1: the age to be assigned
 * @Owner_1: the owner's name to be assigned
 */
void init_dog(struct Dog_Name *D_1, char *Name_1, float Age_1, char *Owner_1)
{

    if (D_1 == NULL)
        D_1 = malloc(sizeof(struct Dog_Name));

    D_1->Name_1 = Name_1;
    D_1->Age_1 = Age_1;
    D_1->Owner_1 = Owner_1;
}


