#include "lists.h"

/**
 * free_listint2 - function to free listint_t
 * @head: the first element in the list
 * Return: void as in none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	if (current == NULL)
		return;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
