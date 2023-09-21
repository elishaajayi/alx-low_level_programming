#include "main.h"

/**
* rot13 - function to encode using the rot13 cipher
* @str: the string to encode
* Return: str to the function call
*/
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] + 13;
		}
	}

	return (str);
}
