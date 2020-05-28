#include "hash_tables.h"

/**
 * key_index - computes index for a hash table, using djb2 algorithm.
 * @key: const unsigned char*, pointer to string.
 * @size: unsigned long int size of the hashtable.
 * Return: unsigned long int, index for hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int holder;

	holder = hash_djb2(key);
	return (holder % size);
}
