#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic information about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This structure holds basic information about a dog,
 *              including its name, age, and owner's name.
 */
struct dog {
    char *name;
    float age;
    char *owner;
};
typedef struct dog dog_t;
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif

