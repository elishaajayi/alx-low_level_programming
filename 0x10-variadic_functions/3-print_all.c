#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: list of arguments passed to the function
 * Return: void as in none
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *val;

	va_list characters;

	va_start(characters, format);
}
