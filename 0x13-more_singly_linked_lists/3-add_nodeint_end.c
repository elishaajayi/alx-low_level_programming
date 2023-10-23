#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head: finally given head
 * @n: the number to add
 * Return: NULL for fail and pointer to head for success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *current = *head;
	int num = n;

	if (new_end == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_end;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	new_end->n = num;
	current->next = new_end;

	return (*head);
}
