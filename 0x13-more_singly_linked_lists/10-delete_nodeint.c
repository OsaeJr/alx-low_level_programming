#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: double pointer
 * @index: position to delete new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int current_index;
	listint_t *node_to_delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	current_index = 0;
	while (current != NULL && current_index < index - 1)
	{
		current = current->next;
		current_index++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	node_to_delete = current->next;
	current->next = current->next->next;
	free(node_to_delete);
	return (1);

}
