#include "lists.h"

/**
  * pop_listint - delete head node
  * @head: pointer to pointer
  * Return: int
  */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int tempVar;

	if (*head == NULL)
		return (0);

	node = *head;
	tempVar = node->n;
	*head = node->next
		;
	free(node);

	return (tempVar);
}

