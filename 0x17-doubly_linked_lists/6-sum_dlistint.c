#include "lists.h"

/**
 * sum_dlistint - return the sum of all the
 * --- data (n) of a dlistint_t linked list.
 *
 * @head: pointer to a doubly linked list.
 * Return: sum data (n) OR 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *pt = head;
	int sum = 0;

	if (!pt)
		return (0);

	while (pt)
	{
		sum += pt->n;
		pt = pt->next;
	}
	return (sum);
}
