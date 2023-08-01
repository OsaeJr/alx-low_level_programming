#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t,and returns head nodes data
 * @head: head node to be deleted
 * Return: head nodes data and 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
