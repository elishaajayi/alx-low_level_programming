#include "main.h"

/**
* print_rev - function to print a string in reverse
* @s: the string to print
* Return: void as in none
*/
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	j = i;

	while (j >= 0)
	{
		if (s[j] != '\0')
		{
			_putchar(s[j]);
		}

		j--;
	}

	_putchar('\n');
}
