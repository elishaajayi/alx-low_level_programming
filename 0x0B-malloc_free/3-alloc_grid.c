#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* alloc_grid - function to a 2 dimensional array of integers
* @width: the width
* @height: the height
* Return: NULL for failure or pointer to array
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);

	grid = malloc(height * sizeof(int *)); /* int * because pointer to pointer*/

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)/* F */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
