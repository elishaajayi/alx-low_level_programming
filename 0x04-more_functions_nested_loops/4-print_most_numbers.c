#include "main.h"

/**
* print_most_numbers - prints 0 - 9 without 2 and 4
* @void: as in none
* Return: void as in none
*/
void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
		{
			_putchar(48 + num);
		}
		_putchar('\n');
		num++;
	}
}
