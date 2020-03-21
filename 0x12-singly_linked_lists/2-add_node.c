#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_node - insert node at the beginning of list
  * @head: pointer
  * @str: pointer to char
  * Return: pointer
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	/* locate memory for temp */
	temp = (list_t *) malloc(sizeof(list_t));

	/* check if string is null */
	if (!str)
		temp->str = NULL;
	else
	{
		/* allocate memory for temp->str */
		temp->str = malloc((sizeof(str) / sizeof(str[0])) + 1);

		/* check for failure */
		if (!temp->str)
			return (NULL);
		/* duplicate str */
		temp->str = strdup(str);
	}
	/* check if first elem */
	if (!head)
		*head = temp;
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
