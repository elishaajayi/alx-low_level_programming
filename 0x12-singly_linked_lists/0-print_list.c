#include "lists.h"

/**
 * print_list - print lists function
 * @h: the node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num_node++;
		h = h->next;
	}

	return (num_node);
}
