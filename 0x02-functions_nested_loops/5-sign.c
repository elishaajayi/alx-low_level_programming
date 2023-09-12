#include "main.h"

/**
* print_sign - function to print the sign of a number
* @n: the number to be evaluated
* Return: 1 for greater, 0 for 0, and -1 for less than
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
