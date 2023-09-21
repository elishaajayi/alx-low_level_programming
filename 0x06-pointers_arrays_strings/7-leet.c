#include "main.h"

/**
* leet - function to encode string as 1337
* @str: string to encode
* Return: str back to the function call
*/
char *leet(char *str)
{
	char rep[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char alp[] = "aeotlAEOTL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; alp[j] != '\0'; j++)
			if (str[i] == alp[j])
				str[i] = rep[j];

	return (str);
}
