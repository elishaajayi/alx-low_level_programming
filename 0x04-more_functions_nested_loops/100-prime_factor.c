#include <stdio.h>
#include <math.h>

/**
 * main - first function to run
 * Description: find largest prime factor
 * Return: 0 for success
 */
int main(void)
{
	long largest = -1;
	long n = 612852475143;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 1)
	{
		largest = n;
	}

	printf("%lu\n", largest);

	return (0);
}
