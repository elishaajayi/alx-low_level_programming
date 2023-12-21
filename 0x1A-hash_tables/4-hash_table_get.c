#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value using a key
 * @ht: the hash table to look into
 * @key: the key we are to look for
 * Return: the value string to llok for
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	current = ht->array[i];
	if (current != NULL && strcmp(current->key, key) != 0)
		current = current->next;

	if (current != NULL)
		return (current->value);
	return (NULL);
}
