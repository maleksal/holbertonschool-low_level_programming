#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *pointerNode, *prevNode;
	unsigned int idx;


	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		pointerNode = ht->array[idx];
		while (pointerNode)
		{
			prevNode = pointerNode;
			pointerNode = pointerNode->next;
			free(prevNode->key);
			free(prevNode->value);
			free(prevNode);
		}
	}
	free(ht->array);
	free(ht);
}
