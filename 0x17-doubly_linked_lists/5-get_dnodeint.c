#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: pointer to doubly linked list.
 * @index: index of the node, starting from 0.
 * Return: <addr> of the node OR NULL if does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int idx = 0;

	while (ptr)
	{
		if (idx == index)
			return (ptr);

		ptr = ptr->next;
		idx++;
	}

	return (NULL);


}

