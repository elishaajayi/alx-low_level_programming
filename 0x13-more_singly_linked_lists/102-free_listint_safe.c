#include "lists.h"

/**
 * save_ptr2 - save pointers of the nodes in a linked list
 * @list: list given
 * @size: list created size
 * @new: node to add
 * Return: pointer to the new ll
 */
listint_t **save_ptr2(listint_t **list, int size, listint_t *new)
{
	int i;
	listint_t **ptr_list = malloc(size * sizeof(listint_t *));

	if (ptr_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		ptr_list[i] = list[i];
	ptr_list[i] = new;
	free(list);
	return (ptr_list);
}

/**
 * free_listint_safe - free the linked list.
 * @h: first and the guardian
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	int i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);

	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}

		num++;
		list = save_ptr2(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}

	free(list);
	return (num);
}
