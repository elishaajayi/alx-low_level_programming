#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the destination
 * @src: the source
 * @n: number of byter to copy
 * Return: dest for destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			src[i] = dest[i];
	}

	return (dest);
}
