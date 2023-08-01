#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees the list
 * @h: head node of list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
	node_count++;
	next_node = current->next;

	if ((void *)current <= (void *)current->next)
	{
		*h = NULL;
		free(current);
		break;
	}

	free(current);
	current = next_node;
	}

	return (node_count);
}
