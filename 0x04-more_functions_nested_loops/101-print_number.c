#include "main.h"
#include <limits.h>

void limits(int n);

/**
 * print_number - print any number with putchar
 * @n: the number to print
 * Return: void as in none
 */
void print_number(int n)
{
	int x = n;
	int digit;
	int places = 1000000000;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}

	limits(n);

	if (n == 0)/* A */
		_putchar('0');
	else
	{
		while (places > x)/* B */
			places /= 10;
		while (places > 0)
		{
			digit = x / places;/* C */
			_putchar((digit % 10) + '0');
			places /= 10;
		}
	}
}

void limits(int n)
{
	if (n == INT_MAX || n == INT_MIN)
	{
	while (1)
	{
	if (n == INT_MAX)
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('7');
		break;
	}
	else if (n == INT_MIN)
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		break;
	}
	}
	}
}
