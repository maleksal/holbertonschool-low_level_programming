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
	int strlen;

	/* check if head is null */
	if (head == NULL)
		return (NULL);

	/* locate memory for temp */
	temp = (list_t *) malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	/* get length */
	strlen = _strlen(str);

	/* duplicate str */
	temp->str = strdup(str);

	/* add string length in temp->len */
	temp->len = strlen;

	temp->next = *head;
	*head = temp;

	return (*head);
}
