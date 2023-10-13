#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: list of arguments passed to the function
 * Return: void as in none
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0, b = 0;
	char *separator = "";

	char_format options[] = {
		{"c", print_one_char},
		{"i", print_integers},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list characters;

	va_start(characters, format);

	while (format && format[b])
	{
		a = 0;
		while (options[a].cpicker)
		{
			if (format[b] == *options[a].cpicker)
			{
				printf("%s", separator);
				options[a].correct_function(characters);
				separator = ", ";
				break;
			}
			a++;
		}
		b++;
	}

	printf("\n");
	va_end(characters);
}

/**
 * print_one_char - function to print one char formats
 * @characters: the parameter to print
 * Return: void as in none
 */
void print_one_char(va_list characters)
{
	printf("%c", va_arg(characters, int));
}

/**
 * print_integers - function to prinnt the int format
 * @characters: the parameter to print
 * Return: void as in none
 */
void print_integers(va_list characters)
{
	printf("%d", va_arg(characters, int));
}

/**
 * print_float - function to print float formats
 * @characters: the parameter to print
 * Return: void as in none
 */
void print_float(va_list characters)
{
	printf("%f", va_arg(characters, double));
}

/**
 * print_string - function to print char* formats
 * @characters: the parameter to print
 * Return: void as in none
 */
void print_string(va_list characters)
{
	char *s;

	s = va_arg(characters, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s", s);
}
