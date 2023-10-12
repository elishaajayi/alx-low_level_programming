#include "variadic_functions.h"

/**
 * print_strings - function to print the strings entered
 * @separator: string to print in between strings
 * @n: number of strings passed in to function
 * Return: void as in none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;

	va_list to_print;

	va_start(to_print, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(to_print, char *);

		if (!val)
			val = "(nil)";
		else
			printf("%s", va_arg(to_print, char *));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(to_print);
}
