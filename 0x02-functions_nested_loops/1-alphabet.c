#include <stdio.h>

void print_alphabet(void);

/**
* main - check the code
*
* Return: 0 for success
*/
int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar(ascii);
		ascii++;
	}
	putchar('\n');
}
