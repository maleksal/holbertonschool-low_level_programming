#include "lists.h"



/**
  * print_listint - print elem in linked list
  * @h: pointer
  * Return: int
  */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	const listint_t *ptr;

	while (h != NULL)
	{
		ptr = h;
		printf("%d\n", ptr->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
