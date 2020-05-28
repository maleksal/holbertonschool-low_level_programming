#include "hash_tables.h"

/**
 * hash_table_create - creates a hash-table with the provided size
 * @size: unsiged int, size of the table
 * Return: pointer to the created table, NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(char *) * size);
	if (!table->array)
		return (NULL);

	return (table);
}
