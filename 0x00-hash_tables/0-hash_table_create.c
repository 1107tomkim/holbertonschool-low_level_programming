#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size of array
 * Return: New hash table if not NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int cmps;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (cmps < size)
		new_table->array[cmps++] = NULL;

	return (new_table);
}
