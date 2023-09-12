#include "main.h"

/**
* times_table - as the name implies
*
* Return: void as in none
*/
void times_table(void)
{
	int width, height, value;

	for (height = 0; height < 10; height++)
	{
		for (width = 0; width < 10; width++)
		{
			value = height * width;


			if (width != 0 && value < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (width != 0 && value > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (value < 10)
			{
				_putchar(value + '0');
			}
			else
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
