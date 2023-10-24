#include "lists.h"

/**
 * print_listint_safe - print the linked list
 * @head: simple pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int num_nodes = 0;
	const listint_t *current = head;

	while (current)
	{
		if (current == NULL)
			return (num_nodes);

		printf("[%p] %i\n", (void *)&(current->n), current->n);
		num_nodes++;
		current = current->next;
	}

	printf("-> [%p] 98\n", (void *)head);
	exit(98);
}
