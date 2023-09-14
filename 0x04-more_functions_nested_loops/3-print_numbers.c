#include "main.h"

/**
* print_numbers - print numbers 1 through 9
* @void: as in none
* Return: void as in none
*/
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(48 + num);
		num++;
	}
	_putchar('\n');
}
