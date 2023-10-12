#include "variadic_functions.h"

/**
* sum_them_all - function to sum all values given
* @n: the numbers to sum
* Return: sum, the sum of everything
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, int);

	va_end(num);

	return (sum);
}
