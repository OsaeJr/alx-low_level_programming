#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints the number of the elements of a listint_t list.
 * @h: pointer to the list-t list to print
 *
 * Return: number of nodes printed
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;


	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);

}
