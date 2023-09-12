#include "main.h"

/**
* print_last_digit - as the description states
* @num: the number to be evaluated
* Return: last is the number at the end of num
*/
int print_last_digit(int num)
{
	int val, last;

	if (num < 0)
	{
		val = -1 * num;
		last = val % 10;
	}
	else
	{
		last = num % 10;
	}
	_putchar(last + '0');

	return (last);
}
