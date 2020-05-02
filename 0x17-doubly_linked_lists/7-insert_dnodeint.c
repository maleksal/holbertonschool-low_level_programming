#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position.
 * @h: **pointer to doubly linked list
 * @idx: index where to insert the node
 * @n: data of the new node
 * Return: <addr> of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr = *h;
	unsigned int pos = 0;

	if (*h == NULL || idx == 0)
	{
		if (idx != 0)
			return (NULL);
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (ptr)
	{
		if (pos + 1 == idx && ptr->next != NULL)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);

			new_node->n = n;
			new_node->next = ptr->next;
			new_node->prev = ptr;
			ptr->next->prev = new_node;
			ptr->next = new_node;

			return (new_node);
		}
		ptr = ptr->next;
		pos++;
	}
	return (NULL);

}
