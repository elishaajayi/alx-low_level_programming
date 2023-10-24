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
	listint_t *next;

	if (head == NULL)
		return (0);

	current = *head;
	next = current->next;
	head_num = current->n;

	*head = next;
	free(current);

	return (head_num);
}
