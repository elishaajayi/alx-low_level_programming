#include "main.h"

/**
* _puts_recursion - function to print string with putchar
* @s: the string to print
* Return: void as in none
*/
void _puts_recursion(char *s)
{
	/* Base condition */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Operation to perform */
	_putchar(*s);
	s++;

	/* Calling function recursively */
	_puts_recursion(s);
}
