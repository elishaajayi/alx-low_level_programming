#include "main.h"

/**
* _strcmp - function to compare strings
* @s1: the first string
* @s2: the second string
* Return: 0 for success
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, out = 0;
	int i, small;

	/* I intend to add the up the values of each string and compare */
	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	if (a > b)
		small = b;
	else if (a < b)
		small = a;

	for (i = 0; i < small; i++)
	{
		if (s1[i] != s2[i])
			out++;
	}

	if (a > b && out > 0)
		return (15);
	else if (a < b && out > 0)
		return (-15);
	else
		return (0);
}
