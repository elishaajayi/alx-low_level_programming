#include "main.h"

/**
* _strspn - function to find how many bytes of s contain bytes in accept
* @s: the string to cnsider
* @accept: the string characters to check for
* Return: number of character found
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, match = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (match);
		}

		i++;
	}

	return (match);
}
