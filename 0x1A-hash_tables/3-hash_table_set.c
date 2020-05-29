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
	hash_node_t *newElement, *walk;
	unsigned long int tableIndex;

	if (!key || !*key || !value || !ht)
		return (0);
	tableIndex = key_index((const unsigned char *) key, ht->size);
	walk = ht->array[tableIndex];
	while (walk)
	{
		if (strcmp(key, walk->key) == 0)
		{
			free(walk->value);
			walk->value = strdup(value);
			if (!walk->value)
				return (0);
			return (1);
		}
		walk = walk->next;
	}

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
	newElement->next = ht->array[tableIndex];
	ht->array[tableIndex] = newElement;
	return (1);
}
