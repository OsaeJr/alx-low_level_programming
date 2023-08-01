#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - inserts a new node at a given position.
 * @head: head node of list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;
	return (*head);
}
