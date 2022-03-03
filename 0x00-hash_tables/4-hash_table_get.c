#include "hash_tables.h"

/**
 * hash_table_get - gets val of ht from given key
 * @ht: hash table we want to look into
 * @key: key we are looking for
 * Return: value associated with elemeent
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int loc;
	hash_node_t *match = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	loc = key_index((const unsigned char *)key, ht->size);
	match = ht->array[loc];

	while (match != NULL && match->key != NULL && strcmp(key, match->key) != 0)
		match = match->next;

	if (match == NULL || match->key == NULL || strcmp(key, match->key) != 0)
		return (NULL);
	return (match->value);
}
