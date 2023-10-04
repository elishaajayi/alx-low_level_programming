#include "main.h"

/**
* str_concat - function to concatenate two strings
* @s1: the first string
* @s2: the second
* Return: NULL on failure or pointer to concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	int len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
		while (s1[len1] != '\0')
			len1++;
	if (s2 == NULL)
		len2 = 0;
	else
		while (s2[len2] != '\0')
			len2++;

	len = len1 + len2 + 1;
	s = malloc(len * sizeof(char));

	if (len == 1)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[len1 + j] = s2[j];

	return (s);
}
