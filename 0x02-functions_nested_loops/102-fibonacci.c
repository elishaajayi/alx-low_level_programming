#include <stdio.h>

/**
* main - print first 50 fibonacci numbers
* Description: fibonacci numbers
* Return: 0 for success
*/
int main(void)
{
	long i = 1, j = 2, n = 2;
	long k;

	printf("%lu, ", i);

	while (n <= 50)
	{
		if (n != 50)
		{
			printf("%lu, ", j);
		}
		else
		{
			printf("%lu\n", j);
		}

		k = j;
		j = i + j;
		i = k;
		n++;
	}

	return (0);
}
