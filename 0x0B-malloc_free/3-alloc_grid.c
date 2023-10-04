#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function to a 2 dimensional array of integers
* @width: the width
* @height: the height
* Return: NULL for failure or pointer to array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
