#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to stuct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
                return;

	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Name: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
