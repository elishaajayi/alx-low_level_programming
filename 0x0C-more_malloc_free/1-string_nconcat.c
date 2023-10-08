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
	char *s;
	unsigned int j;
	int i, len, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;
	s = malloc(len * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < (n / sizeof(char)); j++)
		s[len1 + j] = s2[j];

	return (s);
}
