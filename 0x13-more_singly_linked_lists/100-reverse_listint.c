#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: pointer
  * Return: pointer
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node;
	listint_t *follower;

	if (!head || *head == NULL)
		return (NULL);

	next_node = *head;

	/* set first_node to NULL */
	follower = next_node;
	next_node = next_node->next;
	follower->next = NULL;

	while (next_node != NULL)
	{
		follower = next_node;
		next_node = next_node->next;
		follower->next = *head;
		*head = follower;
	}
	*head = follower;
	return (*head);
}
