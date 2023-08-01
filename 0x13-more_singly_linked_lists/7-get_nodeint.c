#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node of list
 * @index: value to index position to be returned
 * Return: nth node , otherwise NULL if node does not exits
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int current_index = 0;

	while (current != NULL)
	{
		if (current_index == index)
			return current;

		current = current->next;
		current_index++;
	}

	return NULL;
}
