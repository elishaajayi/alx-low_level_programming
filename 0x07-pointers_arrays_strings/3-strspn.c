#include "main.h"

/**
* _strspn - function to find how many bytes of s contain bytes in accept
* @s: the string to cnsider
* @accept: the string characters to check for
* Return: number of character found
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0, num = 0;
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
				num = num + 1;
			else
				return (num);
		}
	}

	return (num);
}
