#include "main.h"

/**
* print_last_digit - as the description states
* @num: the number to be evaluated
* Return: last is the number at the end of num
*/
int print_last_digit(int num)
{
	int last;

	if (num > 0)
	{
		last = num % 10;
	}
	else
	{
		num = -1 * num;
		last = num % 10;
	}

	return (last);
}
