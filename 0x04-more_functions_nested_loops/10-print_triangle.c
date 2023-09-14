#include "main.h"

/**
* print_triangle - print steps of triangles
* @size: number of steps
* Return: void as in none
*/
void print_triangle(int size)
{
	int space, i, j;
	int t = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = t - i;
			j = i + 1;

			while (space > 0)
			{
				_putchar(' ');
				space--;
			}

			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
