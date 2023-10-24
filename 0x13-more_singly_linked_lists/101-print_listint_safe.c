#include "lists.h"

/**
 * print_listint_safe - prints the ll
 * @head: the first
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int length = 0, index = 0, i = 0, j = 0, check = 0;
	listint_t const **save_ptr = malloc(sizeof(listint_t) * 10);

	if (!save_ptr)
		exit(98);

	while (head != NULL)
	{
		for (i = 0; i < length; i++)
		{
			if (head == save_ptr[i])
			{
				check = 1;
				index = i;
				break;
			}
			else
				check = 0;
		}

		if (check == 1)
			break;

		save_ptr[length] = head;
		head = head->next;
		length++;
	}

	while (j < length)
	{
		printf("[%p] %d\n", (void *)save_ptr[j], save_ptr[j]->n);
		j++;
	}

	if (check == 1)
		printf("-> [%p] %d\n", (void *)save_ptr[index], save_ptr[index]->n);
	free(save_ptr);
	return (length);
}
