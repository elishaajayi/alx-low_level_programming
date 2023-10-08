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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < nmemb)
	{
		arr[i] = '0';
		i++;
	}

	return (arr);
}
