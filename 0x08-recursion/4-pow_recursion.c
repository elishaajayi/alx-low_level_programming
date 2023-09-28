#include "main.h"

/**
* _pow_recursion - s
* @x: normal number
* @y: power to raise x to
* Return: funky as always
*/
int _pow_recursion(int x, int y)
{
	/* Base case */
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
