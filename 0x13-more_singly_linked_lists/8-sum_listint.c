#include "lists.h"

/**
 * sum_listint - sum of all int in list
 * @head: the first node of list
 * Return: sum of int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
