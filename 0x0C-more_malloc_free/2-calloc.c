#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: the number of members in the array
 * @size: the of each member
 * Return: NULL for fail and pointer to created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int total, i = 0;

	total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(total);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		arr[i] = 0;

	return (arr);
}
