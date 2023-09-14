#include "main.h"

/**
* print_diagonal - function to print diagonals with backslash
* @n: number of steps
* Return: void as in none
*/
void print_diagonal(int n)
{
	int step = 0;
	int i;

	if (n > 0)
	{
		while (step < n)
		{
			for (i = 0; i <= step; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			step++;
		}
	}
	else
		_putchar('\n');
}
