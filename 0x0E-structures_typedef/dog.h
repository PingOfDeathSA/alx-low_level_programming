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
	char *name;
	float age;
	char *owner;
};

typedef struct dog_1 dog_t;

void init_dog(struct dog_1 *d_1, char *name, float age, char *owner);
void print_dog(struct dog_1 *d_1);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d_1);
char *_strcpy(char *dest_1, char *String_1);
int _strlen(char *s_1);
#endif
