#include <stdio.h>

/**
* main - first function to run
* Description: Program to print hexadecimals
* Return: 0 to show success
*/
int main(void)
{
	int numbers = 0;
	int alphabets = 'a';

	while (numbers < 10)
	{
		putchar(48 + numbers);
		numbers++;
	}

	while (alphabets <= 'f')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
