#include "lists.h"


/**
  * listint_len - get length of linked list
  * @h: pointer to a user defined data type
  * Return: int
  */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
