#include "lists.h"


/**
  * insert_nodeint_at_index - insert node at a given position
  * @head: pointer
  * @idx: unsigned int
  * @n: int
  * Return: adress
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *node;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL || idx == 0)
	{
		if (idx == 0)
		{	node->next = *head;
			*head = node;
			return (node);
		}
		return (NULL);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		if (index == (idx - 1))
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		ptr = ptr->next;
		index++;
	}
	return (NULL);
}
