#include "hash_tables.h"

/**
 * hash_table_set - insert item in a key value hash table
 * @ht: hash table
 * @key: const char *
 * @value: const char *
 * Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElement;
	hash_node_t *pointer, *walk;
	unsigned long int tableIndex;

	if (!key || !*key || !value || !ht)
		return (0);
	/* create node */
	newElement = malloc(sizeof(hash_node_t));
	if (!newElement)
		return (0);
	newElement->key = (char *)key;
	newElement->value = strdup(value);
	if (newElement->value == NULL)
	{
		free(newElement);
		return (0);
	}
	/* hash key and get index */
	tableIndex = key_index((const unsigned char *)key, ht->size);
	if (ht->array[tableIndex] != NULL)
	{
		walk = ht->array[tableIndex];
		pointer = walk;
		while (walk)
		{
			if (strcmp(walk->key, key) == 0)
			{
				free(walk);
				break;
			}
			walk = walk->next;
		}
		/* add node to start of linked list */
		newElement->next = pointer->next;
		pointer->next = newElement;
	}
	ht->array[tableIndex] = newElement;
	return (1);
}