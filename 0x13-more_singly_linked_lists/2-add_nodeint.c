#include "lists.h"

/**
 * add_nodeint - add node at beginning
 * @head: finally given head
 * @n: the number to add
 * Return: NULL for fail and pointer to head for success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int num = n;

	if (new == NULL)
		return (NULL);

	new->n = num;
	new->next = *head;

	*head = new;

	return (new);
}
