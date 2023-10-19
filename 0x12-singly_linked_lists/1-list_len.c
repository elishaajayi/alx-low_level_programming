#include "lists.h"

/**
 * list_len - lists number of members
 * @h: the node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}
