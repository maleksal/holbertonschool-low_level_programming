#include "lists.h"


/**
  * add_nodeint - add elem to singly linked list
  * @head: pointer to head
  * @n: type of int
  * Return: pointer to addr of new elem
  */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
