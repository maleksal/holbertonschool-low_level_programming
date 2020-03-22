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
  * add_node_end - insert node at the end of list
  * @head: pointer
  * @str: pointer to char
  * Return: pointer
  */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Node;
	list_t *ptr = *head;

	/* locate memory for temp */
	Node = (list_t *) malloc(sizeof(list_t));
	if (Node == NULL)
		return (NULL);

	Node->next = NULL;
	Node->str = strdup(str);
	Node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = Node;
		return (Node);
	}

	/* insert at the end */
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = Node;
	return (*head);
}
