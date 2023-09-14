#include <stdio.h>
#include <math.h>

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
			if (div > i)
				i = div;
			num = num / div;
		}
		div++;
	}

	printf("%lu\n", i);

	return (0);
}
