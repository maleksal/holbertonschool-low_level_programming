#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * print_list - print elements of a linked list
  * @h: singly linked list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int nodes = 0;
	const list_t *ptr;

	ptr = h;

	/* acess list */

	while (ptr != NULL)
	{
		/* check if string is null */
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			/* print elem */
			printf("[%d] %s\n", ptr->len, ptr->str);


		nodes++; /* count node */
		ptr = ptr->next; /* move to next node */
	}
	return (nodes); /* return number of nodes */

}
