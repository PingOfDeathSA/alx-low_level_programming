#ifndef DOG_H
#define DOG_H

/**
 *
 * @name: Owner_1
 * @age: Owner_2
 * @owner: Owner_3
 *
 * 
 */
struct dog_1
{
	char *name_1;
	float age_1;
	char *owner_1;
};

typedef struct dog_1 dog_t;

void init_dog(struct dog_1 *d_1, char *name_1, float age_1, char *owner_1);
void print_dog(struct dog_1 *d_1);
dog_t *new_dog(char *name_1, float age_1, char *owner_1);
void free_dog(dog_t *d_1);
char *_strcpy(char *dest_1, char *String_1);
int _strlen(char *s_1);

#endif
