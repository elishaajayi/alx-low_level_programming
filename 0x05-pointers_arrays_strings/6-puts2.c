#include "main.h"

/**
* puts2 - function to print every other character of a string
* @str: string to use
* Return: void as in none
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
			_putchar(str[i]);
		else if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
