#include "main.h"

/**
* _strncat - function to concatenate two strings with specified size
* @dest: destination of string
* @src: source of string
* @n: number of bytes to use from src
* Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[i + j] = src[j];
	}

	while (dest[i] != '\0')
		i++;

	return (dest);
}
