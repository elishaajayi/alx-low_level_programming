#include "main.h"

/**
* print_times_table - as the name implies
* @n: the numbe of times to multiply
* Return: void as in none
*/
void print_times_table(int n)
{
	int width, height, value;

	if (!(n > 15 || n < 0))
	{
		for (height = 0; height <= n; height++)
		{
			for (width = 0; width <= n; width++)
			{
				value = height * width;

				if (width != 0 && value < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				if (width != 0 && value > 9 && value < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (width != 0 && value > 99)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (value < 10)
					_putchar(value + '0');
				else
				{
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
