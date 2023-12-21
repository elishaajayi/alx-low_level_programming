#include "hash_tables.h"

/**
 * hash_table_set - add an alement to the hash table
 * @ht: the hash table created to use
 * @key: the key of the element to add
 * @value: the value in the key/value pair
 * Return: 1 for success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	char *value_current;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_current = strdup(value);
	if (value_current == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_current;
			return (1);
		}
	}

	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
	{
		free(value_current);
		return (0);
	}
	current->key = strdup(key);
	if (current->key == NULL)
	{
		free(current);
		return (0);
	}
	current->value = value_current;
	current->next = ht->array[index];
	ht->array[index] = current;

	return (1);
}
