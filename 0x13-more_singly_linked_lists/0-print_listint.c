#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: pointer to the list-t list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
