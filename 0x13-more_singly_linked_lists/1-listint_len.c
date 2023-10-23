#include "lists.h"

/**
 * listint_len - find number of elements in sll
 * @h: the struct to extract head from
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
