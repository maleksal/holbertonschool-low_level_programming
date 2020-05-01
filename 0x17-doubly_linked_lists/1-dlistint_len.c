#include "lists.h"


/**
  * dlistint_len - Return number of elements in doubly linked list
  * @h: pointer to doubly linked list
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node = h;
	int elem = 0;

	if (node == NULL)
		return (0);


	while (node)
	{
		elem++;
		node = node->next;
	}

	return (elem);
}
