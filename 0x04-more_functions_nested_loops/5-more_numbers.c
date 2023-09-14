#include "main.h"

/**
* more_numbers - function to print 0-14, ten times
* @void: as in none
* Return: void as in none
*/
void more_numbers(void)
{
	int num = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (num <= 14)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');

			num++;
		}
		_putchar('\n');
		num = 0;
	}
}
