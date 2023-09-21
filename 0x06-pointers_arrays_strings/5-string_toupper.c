#include "main.h"

/**
* string_toupper - s
* @str: the string to use
* Return: string attached as a parameter
*/
char *string_toupper(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] > 90)
			str[i] = str[i] - 32;
	}

	return (str);
}
