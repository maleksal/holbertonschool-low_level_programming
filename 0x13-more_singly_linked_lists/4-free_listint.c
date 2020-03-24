#include "lists.h"


/**
  * free_listint - frees memory
  * @head: pointer to linked list
  */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
