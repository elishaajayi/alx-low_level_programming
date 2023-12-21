#include "hash_tables.h"

/**
 * key_index - to find the index of the key provided
 * @key: the key to work with
 * @size: the size of the hash table
 * Return: the index ot NULL
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
