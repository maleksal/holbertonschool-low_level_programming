#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at nth position
  * @head: pointer
  * @index: unsigned int
  * Return: int
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *ptr;
	listint_t *node;

	if (!head || *head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr->next != NULL)
	{
		if (i == (index - 1))
		{
			node = ptr->next;
			ptr->next = node->next;
			free(node);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
