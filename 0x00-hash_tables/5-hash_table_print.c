#include "hash_tables.h"

/**
 * hash_table_print - Print key val in order that appears in hash table
 * @ht: Hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int x;
	int flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	putchar('{');
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
