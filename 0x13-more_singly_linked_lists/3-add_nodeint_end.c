#include "lists.h"


/**
  * add_nodeint_end - add elem to the end of a singly linked list
  * @head: pointer to head
  * @n: type of int
  * Return: pointer to addr of new elem
  */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;


	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;
	return (new_node);

}
