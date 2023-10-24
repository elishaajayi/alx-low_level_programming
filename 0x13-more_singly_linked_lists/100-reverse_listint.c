#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: first value
 * Return: pointer to node of first array
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next, *prev;

	if (*head == NULL)
		return (*head);

	current = *head;
	next = current->next;

	while (next != NULL)
	{
		prev = current;
		current = next;
		next = next->next;
		current->next = prev;
	}

	(*head)->next = NULL;
	*head = current;

	return (*head);
}
