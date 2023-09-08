#include <stdio.h>

/**
* main - first function to run
* Description: Prints different combinations of two digits
* Return: 0 for success
*/
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (((num1 != num2) && (num2 > num1)))
			{
				putchar(48 + num1);
				putchar(48 + num2);
				if (!(num1 == 8 && num2 == 9))
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
