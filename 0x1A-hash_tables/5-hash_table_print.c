#include "hash_tables.h"

/**
 * hash_table_print - prints hash table in key value order
 * @ht: pointer to hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pointerNode;
	unsigned int idx;
	int checker = 0;


	if (!ht)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		pointerNode = ht->array[idx];
		while (pointerNode)
		{
			if (checker)
				printf(", ");
			printf("'%s': '%s'", pointerNode->key, pointerNode->value);
			pointerNode = pointerNode->next;
			checker++;
		}
	}
	printf("}\n");
}
