#include <stdio.h>

/**
* main - first function to run
* Description: Print alphabets in both lower and uppercase
* Return: 0 for success
*/
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
