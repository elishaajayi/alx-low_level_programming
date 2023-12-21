#include "hash_tables.h"

/**
 * hash_table_print - print the values in a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s'%s': '%s'", sep, current->key, current->value);
			sep = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
