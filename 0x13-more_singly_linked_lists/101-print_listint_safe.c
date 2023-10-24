#include "lists.h"

/**
 * print_listint_safe - print the ints
 * @head: the struct to extract
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head != NULL)
	{
		printf("%i\n", head->n);
		num_nodes++;
		head = head->next;
	}

	return (num_nodes);
}
