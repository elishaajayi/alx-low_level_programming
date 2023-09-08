#include <stdio.h>

/**
* main - first function to run
* Description: Print alphabets without q or e
* Return: 0 for success
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{
			if (num1 < num2)
			{
				putchar(48 + (num1 / 10));
				putchar(48 + (num1 % 10));
				putchar(' ');
				putchar (48 + (num2 / 10));
				putchar (48 + (num2 % 10));
				if (!(num1 == 98 && num2 == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
