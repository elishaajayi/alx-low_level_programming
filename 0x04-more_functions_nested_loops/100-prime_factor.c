#include <stdio.h>

/**
 * main - first function to run
 * Description: find largest prime factor
 * Return: 0 for success
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;
	long i = 0;

	while (num / div != 1)
	{
		if (num % div == 0)
		{
			if (div > i)
				i = div;
			div = 2;
			num = num / div;
		}
		else
			div++;
	}

	printf("%lu\n", i);

	return (0);
}
