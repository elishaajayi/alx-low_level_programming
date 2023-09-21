#include "main.h"

/**
* _strncpy - function to copy a string from src to dest
* @dest: destination of string
* @src: source of the string
* @n: the number of bytes in the string to copy
* Return: pointer to destination of string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
