#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list-t list to print
 *
 * Return: number of nodes printed
 */
size_t list_len(const list_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
