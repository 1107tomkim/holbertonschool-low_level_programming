#include "hash_tables.h"
/**
 * newkey_create - Creates new key-val
 * @key: Key to new pair
 * @value: Value to new pair
 * Return: New pair
 */

hash_node_t *create_ht(const char *key, const char *value)
{
	hash_node_t *new_table;

	new_table = malloc(sizeof(hash_node_t));
	if (!new_table)
		return (NULL);

	new_table->key = strdup(key);
	if (new_table->key == NULL)
	{
		free(new_table);
		return (0);
	}

	new_table->value = strdup(value);
	if (new_table->key == NULL)
	{
		free(new_table->key);
		free(new_table);
		return (0);
	}

	new_table->next = NULL;
	return (new_table);
}

/**
 * hash_table_set - Adding elements or node to the table
 * @ht: hash table
 * @key: key in hash table
 * @value: value related to key
 * Return: 1 on success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int nli = 0;
	hash_node_t *new_table = NULL, *next = NULL, *last = NULL;

	if (key == NULL || value == NULL || ht == NULL || key[0] == '\0')
		return (0);

	nli = key_index((const unsigned char *)key, ht->size);
	next = ht->array[nli];

	if (next && next->key && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	else
	{
		if (next == ht->array[nli])
		{
			new_table = create_ht(key, value);
			if (new_table == NULL)
				return (0);
			if (next == ht->array[nli])
			{
				new_table->next = next;
				ht->array[nli] = new_table;
			}
			else if (next == NULL)
				last->next = new_table;
			else
			{
				new_table->next = next;
				last->next = new_table;
			}
		}
	}
	return (1);
}
