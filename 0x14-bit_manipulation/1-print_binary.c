#include "main.h"

/**
 * print_binary - to print binary representation
 * @n: the initial decimal
 * Return: void as in none
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int base = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < base; i++)
	{
		if ((n & mask) || flag)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
			flag = 1;
		}
		mask >>= 1;
	}
}
