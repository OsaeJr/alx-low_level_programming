#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list-t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("%s\n", h->str);
		h = h->next;
		a++;
	}
	return (a);
}
