#include "main.h"

/**
 * print_number - print any number with putchar
 * @n: the number to print
 * Return: void as in none
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}

