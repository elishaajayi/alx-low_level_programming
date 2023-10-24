#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: the first, obviously
 * @index: the position to delete node
 * Return: 1 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *new_next;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		new_next = (*head)->next;
		free(*head);
		*head = new_next;
		return (1);
	}

	current = *head;

	while (current != NULL)
	{
		if (i == index - 1)
		{
			new_next = current->next;
			current->next = new_next->next;
			free(new_next);
			return (1);
		}
		i++;
		current = current->next;
	}

	return (-1);
}
