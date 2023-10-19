#include "lists.h"

/**
 * add_node_end - function to add node at end of list_h
 * @head: the first element
 * @str: the string to add
 * Return: address of head or NULL for fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);

	if (end_node->str == NULL) /* Check if duplication failed for new node */
	{
		free(end_node);
		return (NULL);
	}

	/* Assigning the rest of the struct node */
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL) /* if no values in singly linked list */
	{
		*head = end_node;
		return (*head);
	}

	while (last_node->next != NULL) /* Loop to end */
		last_node = last_node->next; /* Stop at last before NULL */
	last_node->next = end_node; /* Assign next of that to new node */

	return (*head); /* Return first node */
}
