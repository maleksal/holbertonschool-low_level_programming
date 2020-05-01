#include "lists.h"


/**
 * add_dnodeint_end - add a new node at the end of dlistint_t list
 * @head: pointer to a doubly linked list
 * @n: integer to be inserted
 * Return: addr of the new node or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *node;
	dlistint_t *ptr = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	node->prev = ptr;
	ptr->next = node;

	return (node);

}
