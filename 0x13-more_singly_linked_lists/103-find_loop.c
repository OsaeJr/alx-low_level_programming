#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: head node of list
 * Return: the address of the node wher the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	 listint_t *slow = head;
	 listint_t *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);


	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

		return (slow);
		}
	}

	return (NULL);
}
