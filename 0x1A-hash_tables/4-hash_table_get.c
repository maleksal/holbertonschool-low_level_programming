#include "hash_tables.h"

/**
  * hash_table_get - get item from hash table with a given key
  * @ht: hash table
  * @key: key to corresponding item
  * Return: NULL if fail, pointer to value on success
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indexKey;
	hash_node_t *pointer;

	if (!ht || key)
		return (NULL);
	/* get index */
	indexKey = key_index((const unsigned char *)key, ht->size);

	pointer = ht->array[indexKey];
	if (!pointer)
		return (NULL);

	while ((pointer && pointer->key) && strcmp(pointer->key, key) != 0)
	{
		pointer = pointer->next;
	}

	return (pointer->value);
}
