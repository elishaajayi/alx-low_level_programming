#include "variadic_functions.h"

/**
 * print_numbers - function to print the numbers entered
 * @separator: string to print in between numbers
 * @n: number of integers passed in to function
 * Return: void as in none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list to_print;

	va_start(to_print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(to_print, int));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(to_print);
}
