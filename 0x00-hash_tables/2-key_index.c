#include "hash_tables.h"
/**
 * key_index - Find index
 * @key: Key string
 * @size: Size of table
 * Return: Index where key val is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
