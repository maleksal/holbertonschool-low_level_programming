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
	if (new_node == NULL)
		return (NULL);

	node->n = n;

	node->next = *head;
	node->prev = NULL;

	*head = _node;
	return (node);
}
