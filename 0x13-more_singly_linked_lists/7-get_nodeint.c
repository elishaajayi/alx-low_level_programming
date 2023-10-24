#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of ll
 * @head: the head as usual
 * @index: the index to find
 * Return: NULL for fail and the node for success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_needed;
	listint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			node_needed = current;
			return (node_needed);
		}

		i++;
		current = current->next;
	}

	return (NULL);
}
