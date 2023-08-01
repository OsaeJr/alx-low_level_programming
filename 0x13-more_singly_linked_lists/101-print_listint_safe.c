#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - inserts a new node at a given position.
 * @head: head node of list
 * Return: the address of the new node, or NULL if it failed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		if ((void *)head <= (void *)head->next)
		{
        		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		head = head->next;
	}

	return (node_count);
}
