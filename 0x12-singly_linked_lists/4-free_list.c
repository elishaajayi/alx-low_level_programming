#include "lists.h"

/**
 * free_list - function to free list_t
 * @head: the first element in the list
 * Return: void as in none
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
