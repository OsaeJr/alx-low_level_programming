#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: A dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
