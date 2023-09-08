#include <stdio.h>

/**
* main - first function to run
* Description: Program to print alphabets in lower case
* Return: 0 to show success
*/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	return (0);
}
