#include "lists.h"


/**
 * print_dlistint - print elements of double linked list
 * and return the number of nodes.
 *
 * @h: pointer to doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node = head;
	int count = 0;

	if (!h)
	{
		return (0);
	}
	while (node->next)
	{
		printf(node->n);
		node = node->next;
		count++;
	}

	return (count)

}
