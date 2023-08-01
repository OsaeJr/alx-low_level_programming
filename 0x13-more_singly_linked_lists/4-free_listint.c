#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		free(current);
		current = next_node;
	}
}
