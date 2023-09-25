#include "main.h"

/**
* _memset - fill the first n bytes to s with b
* @s: memory area s
* @b: char to fill in s
* @n: the number of bytes to fill
* Return: s for the meemory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (0);
}
