#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct Node - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct Node
{
	int n;
	struct Node *next;
} listint_t;



listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);

#endif
