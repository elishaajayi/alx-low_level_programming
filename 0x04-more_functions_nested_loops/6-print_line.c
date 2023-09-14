#include "main.h"

/**
* print_line - function to print straight line
* @n: number times _ is to be drawn
* Return: void as in none
*/
void print_line(int n)
{
	int d = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (d <= n)
		{
			_putchar('_');
			d++;
		}
		_putchar('\n');
	}
}
