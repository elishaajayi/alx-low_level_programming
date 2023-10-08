#include "main.h"
#include <stdlib.h>

/**
* array_range - function to return an array of integers
* @min: minimum value
* @max: maximum value
* Return: NULL for fails or array created
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
