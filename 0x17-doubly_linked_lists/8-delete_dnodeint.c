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
	dlistint_t *ptr = *head;
	unsigned int pos = 0;

	if (index == 0)
	{
		new_node = *head;
		if (!new_node)
			return (-1);

		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(new_node);
		return (1);
	}

	while (ptr)
	{
		if (pos == index)
		{
			ptr->prev->next = NULL;
			if (ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			}
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		pos++;
	}
	return (-1);

}


