#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free up previous array grid
 * @grid: the array grid
 * @height: the height of the array
 * Return: void as in none
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
