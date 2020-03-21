#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
  * _strlen - calculate length of sting
  * @s: string
  * Return: int
  */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
  * add_node - insert node at the beginning of list
  * @head: pointer
  * @str: pointer to char
  * Return: pointer
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int strlen = _strlen(str);

	/* locate memory for temp */
	temp = (list_t *) malloc(sizeof(list_t));

	/* check if string is null */
	if (!str)
	{
		temp->str = NULL;
		temp->len = 0;
	} else
	{
		/* allocate memory for temp->str */
		temp->str = malloc(strlen + 1);

		/* check for failure */
		if (!temp->str)
			return (NULL);
		/* duplicate str */
		temp->str = strdup(str);
		/* add string length in temp->len */
		temp->len = strlen;

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
