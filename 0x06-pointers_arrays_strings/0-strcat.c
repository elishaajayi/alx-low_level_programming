#include "main.h"

/**
* _strcat - function to concatenate two strings
* @dest: destination string
* @src: source string
* Return: pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	while (dest[i] != '\0')
		i++;

	dest[i + 1] = '\0';

	return (dest);
}
