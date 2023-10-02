#include "main.h"

/**
* _puts - function to print string to stdout
* @str: the string to print
* Return: void as in none
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
