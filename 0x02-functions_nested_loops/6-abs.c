#include "main.h"

/**
* _abs - function to compute the absolute value
* @n: the integer to evaluated
* Return: 0 for success
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
