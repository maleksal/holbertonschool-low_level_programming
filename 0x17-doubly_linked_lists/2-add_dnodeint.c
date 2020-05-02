#include "lists.h"

/**
 * add_dnodeint - add a node to the begginning of a dlistint_t list
 * @head: pointer to doubly linked list
 * @n: integer datatype of the new node
 * Return: addr of new node or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		(*head)->prev = NULL;
		node->next = *head;
		node->prev = NULL;
	}
	*head = node;
	return (node);
}
