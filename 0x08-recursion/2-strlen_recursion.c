#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
* @s: the string to count
* Return: A little funky
*/
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);
	else/* Recursion */
		return (1 + _strlen_recursion(s + 1));
}
