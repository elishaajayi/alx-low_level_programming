#include "main.h"
#define NULL 0

/**
* _strpbrk - function to check for first occurence of accept in s
* @s: string to check
* @accept: cross reference string
* Return: pointer to location of first occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;
	int i, j;

	while (s[a] != '\0')
		a++;
	while (accept[b] != '\0')
		b++;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
