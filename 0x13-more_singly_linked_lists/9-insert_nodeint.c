#include "lists.h"

/**
 * insert_nodeint_at_index - insert as stated
 * @head: the first node
 * @idx: index to insert at
 * @n: the number to insert
 * Return: NULL or normal head;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int num = n;
	unsigned int i = 0;
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || *head == NULL)
		return (NULL);

	current = *head;
	new_node->n = num;

	while (current != NULL && idx != 0)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
		}
		i++;
		current = current->next;
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	return (NULL);
}
