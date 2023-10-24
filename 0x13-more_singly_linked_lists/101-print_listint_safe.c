#include "lists.h"

/**
 * save_ptr - save pointers to a list
 * @list: list given
 * @size: to contain the old list
 * @new: new node coming in
 * Return: the list created
 */
const listint_t **save_ptr(const listint_t **list, int size,
const listint_t *new)
{
	int i;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - print the linked list.
 * @head: head not the tail
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = save_ptr(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
