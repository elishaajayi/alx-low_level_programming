#include "main.h"

/**
* _strchr - function to locate char in string
* @s: string to consider
* @c: character to find
* Return: pointer to first occurence or NULL
*/
char *_strchr(char *s, char c)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (c == s[i])
			return (&s[i]);
	}

	return ('\0');
}
