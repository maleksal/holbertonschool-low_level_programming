#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->prev != NULL)
			free(head->prev);

		if (head->next == NULL)
		{
			free(head);
			exit(0);
		}
		head = head->next;
	}
}
