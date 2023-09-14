#include <stdio.h>

/**
 * main - first function to run
 * Description: find largest prime factor
 * Return: 0 for success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;
	unsigned long i = 0;

	while (num > div)
	{
		while (num % div == 0)
		{
			printf("%lu\n", div);

			if (div > i)
				i = div;
			num = num / div;
		}
		div++;
	}

	return (0);
}
