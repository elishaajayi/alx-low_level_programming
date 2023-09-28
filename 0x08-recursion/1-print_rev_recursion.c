#include "main.h"

/**
* _print_rev_recursion - print string in reverse
* @s: string to print
* Return: void as in none
*/
void _print_rev_recursion(char *s)
{
	/* Base function */
	if (*s == '\0')
		return;

	/* Recursion */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
