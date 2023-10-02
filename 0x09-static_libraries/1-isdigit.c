#include "main.h"

/**
* _isdigit - function to check the digits
* @c: integer to check
* Return: 1 for digit, 0 for fail
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
