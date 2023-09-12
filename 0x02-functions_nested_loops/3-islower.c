#include <stdio.h>

int _islower(int c);

/**
* main - first function to run
*
* Return: 1 for lowercase
*/
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}

/**
* _islower - function to check lowercase
* @c: integer c is the ascii character
* Return: 1 is lowercase, 0 is not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
