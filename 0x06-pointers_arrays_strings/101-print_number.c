#include "main.h"

/**
 * print_number - print any number with putchar
 * @n: the number to print
 * Return: void as in none
 */
void print_number(int n)
{
	unsigned int num = n;

	/* Unsigned int is always positive */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/* Read recursion: quite confusing */
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
