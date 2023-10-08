#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2 to copy
 * Return: NULL for fail or pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int j;
	int i, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	con_str = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);

	if (con_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		if (s1 == NULL)
		{
			con_str[i] = ' ';
			break;
		}
		con_str[i] = s1[i];
	}

	for (j = 0; j < (n / sizeof(char)); j++)
	{
		if (s2 == NULL)
		{
			con_str[j] = ' ';
			break;
		}
		con_str[i + j] = s2[j];
	}
	return (con_str);
}
