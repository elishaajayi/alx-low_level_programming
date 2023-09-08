#include <stdio.h>

/**
* main - first function to run
* Description: Program to print alphabets in lower case
* Return: 0 to show success
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');

	return (0);
}
