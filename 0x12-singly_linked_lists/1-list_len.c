#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - countes number of elements in a singly linked list
  * @h: pointer
  * Return: type of int
  */

size_t list_len(const list_t *h)
{
	const list_t *pointer = h;
	int len = 0;

	while (pointer)
	{
		len++;
		h = h->next;
		pointer = h;
	}
	return (len);

}
