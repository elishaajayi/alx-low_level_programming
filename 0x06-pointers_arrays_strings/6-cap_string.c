#include "main.h"

/**
* cap_string - capitalize allords in a string
* @str: the string to work with
* Return: str, the modified string
*/
char *cap_string(char *str)
{
	int sep[12] = {' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 0;
	int i, j;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (!(i == len - 1))
			{
				if (str[i] == sep[j] || str[i] == '\t')
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}

	return (str);
}
