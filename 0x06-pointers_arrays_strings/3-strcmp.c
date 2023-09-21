#include "main.h"

/**
* _strcmp - function to compare strings
* @s1: the first string
* @s2: the second string
* Return: 0 for success
*/
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i;

	while (s1[a] != '\0')
		a++;

	while (s1[b] != '\0')
		b++;

	if (a > b)
		return (15);
	else if (a < b)
		return (-15);

	for (i = 0; i < a; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (15);
			if (s1[i] < s2[i])
				return (-15);
		}
	}

	return (0);
}
