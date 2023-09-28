#include "main.h"

/**
* factorial - print factorials
* @n: number to check factorial for
* Return: funky as all h*ll
*/
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
