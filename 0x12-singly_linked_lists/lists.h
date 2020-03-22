#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
  * struct Node - user defined data
  * @str: type of char
  * @len: type of int
  * @next: object refernece pointer
  * Description: Node
  */

typedef struct Node
{
	char *str;
	int len;
	struct Node *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
