#include "main.h"

/**
* print_alphabet_x10 - function to be called in main
*
* Return: void gives none
*/
void print_alphabet_x10(void)
{
	int count;
	int alphabet = 'a';

	for (count = 0; count < 10; count++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		alphabet = 'a';
	}
}
