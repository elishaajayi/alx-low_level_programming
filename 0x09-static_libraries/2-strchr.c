#include "main.h"
#define NULL 0

/**
 * _strchr - function to locate char in string
 * @s: string to consider
 * @c: character to find
 * Return: pointer to first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (c == s[i])
		return (&s[i]);
	else
		return (NULL);
}
