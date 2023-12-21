#include "hash_tables.h"

/**
 * hash_table_create - creating a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(size * sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	return (new_table);
}
