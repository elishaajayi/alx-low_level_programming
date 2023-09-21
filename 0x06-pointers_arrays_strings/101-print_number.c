#include "main.h"

/**
 * print_number - print any number with putchar
 * @n: the number to print
 * Return: void as in none
 */
void print_number(int n)
{
	char num[10];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		num[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}

	while (i > 0)
		_putchar(num[--i]);
}

