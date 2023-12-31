#include "main.h"

/**
* puts_half - function to print half of string
* @str: string to splice
* Return: void as in none
*/
void puts_half(char *str)
{
	int i = 0;
	int j, n;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
	{
		n = (i - 1) / 2;
		n++;
	}

	for (j = n; str[j] != '\0'; j++)
	{
		if (str[j] != '\0')
			_putchar(str[j]);
	}

	_putchar('\n');
}
