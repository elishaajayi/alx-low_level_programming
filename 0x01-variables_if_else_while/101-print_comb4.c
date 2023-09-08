#include <stdio.h>

/**
* main - first function to run
* Description: Print alphabets without q or e
* Return: 0 for success
*/
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				if (((num1 < num2) && (num2 < num3)))
				{
					putchar(48 + num1);
					putchar(48 + num2);
					putchar(48 + num3);
					if (!(num1 == 7 && num2 == 8 && num3 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
