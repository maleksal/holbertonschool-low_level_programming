#include "lists.h"
#include <stdlib.h>


/**
  * free_list - frees allocated memory
  * @head: pointer
  */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
