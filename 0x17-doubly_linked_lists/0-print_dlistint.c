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
	const dlistint_t *node = h;
	int count = 0;

	if (!h)
	{
		return (0);
	}
	
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);

}
