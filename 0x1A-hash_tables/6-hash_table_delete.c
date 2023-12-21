#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table and free all memory
 * @ht: the hash table to consider
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;
	hash_table_t *head = ht;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(head->array);
	free(head);
}
