#include "hash_tables.h"

/*
 *
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indexKey;
	hash_node_t *pointer;

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
