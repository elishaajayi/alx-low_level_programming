#include "main.h"

/**
* _strlen - a function to return length of a string
* @s: string to be checked
* Return: we get the length of s as return value
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
