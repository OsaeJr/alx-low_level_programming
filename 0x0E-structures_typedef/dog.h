#ifndef dog_H
#define dog_H
/**
 * struct dog - Properties of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
