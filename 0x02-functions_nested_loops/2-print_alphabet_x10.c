#include <stdio.h>

void print_alphabet(void);
void print_alphabet_x10(void);

/**
* main - check the code
*
* Return: 0 for success
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
* print_alphabet - main print function
*
* Return: none, because of void type
*/
void print_alphabet(void)
{
	int ascii = 'a';

	while (ascii <= 'z')
	{
		putchar(ascii);
		ascii++;
	}
	putchar('\n');
}

/**
* print_alphabet_x10 - function to be called in main
*
* Return: void gives none
*/
void print_alphabet_x10(void)
{
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
}
