#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at nth position
 * @head: pointer to doubly linked lists
 * @index: position
 * Return: 1 if Success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_node;
	dlistint_t *ptr = *h;
	unsigned int pos = 0;

	if (index == 0)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
		return (-1);
	}

	while (ptr)
	{
		if (pos == idx)
		{
			pos->prev->next = pos->next;
			pos->next->prev = pos->prev;
			free(pos);
			return (1);
		}
		ptr = ptr->next;
		pos++;
	}
	return (-1);

}


