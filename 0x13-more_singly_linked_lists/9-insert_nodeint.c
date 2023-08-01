#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position..
 * @idx: position ito insert new node
 * @head: doule pointer
 * @n: value to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int current_idx;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	current_idx = 0;
	while (current != NULL && current_idx < idx - 1)
	{
		current = current->next;
		current_idx++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
