#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElement;
	hash_node_t *pointer;
	unsigned long int tableIndex;

	if (!key || !ht)
		return (1);

	
	
	/* create node */
	newElement = malloc(sizeof(hash_node_t));
	if (!newElement)
		return (1);

	newElement->key = (char *)key;
	newElement->value = strdup(value);
	
	/* hash key and get index */
	tableIndex = key_index((const unsigned char *)key, ht->size);

	if (ht->array[tableIndex] != NULL)
	{
		pointer = ht->array[tableIndex];
		
		/* add node to start of linked list */
		newElement->next = pointer->next;
		pointer->next = newElement;
	}
	ht->array[tableIndex] = newElement;
	return (0);
}
