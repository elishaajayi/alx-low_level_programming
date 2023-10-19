#include "lists.h"

/**
 * add_node - function to add node at beginning of list_h
 * @head: the first element
 * @str: the string to add
 * Return: address of new head or NULL for fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
