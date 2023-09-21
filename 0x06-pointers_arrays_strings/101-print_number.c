#include "main.h"

/**
 * print_number - print any number with putchar
 * @n: the number to print
 * Return: void as in none
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar(45);
		num = -num;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

