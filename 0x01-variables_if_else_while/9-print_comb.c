#include <stdio.h>

/**
* main - first function to run
* Description: Program to print alphabets in lower case
* Return: 0 to show success
*/
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
