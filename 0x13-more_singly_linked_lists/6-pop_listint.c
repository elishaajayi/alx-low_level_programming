#include "lists.h"

/**
 * pop_listint - pop the head of the list
 * @head: pointer mess to head of list
 * Return: 0 for empty or number in head
 */
int pop_listint(listint_t **head)
{
	int head_num;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	head_num = current->n;

	*head = (*head)->next;
	free(current);

	return (head_num);
}
