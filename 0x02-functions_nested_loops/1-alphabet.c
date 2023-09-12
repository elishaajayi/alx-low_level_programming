#include "main.h"

/**
* print_alphabet - function to be called in main
*
* Return: none, because of void type
*/
void print_alphabet(void)
{
	int ascii = 'a';

	while (ascii <= 'z')
	{
		_putchar(ascii);
		ascii++;
	}
	_putchar('\n');
}
