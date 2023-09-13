#include <stdio.h>

/**
* main - function to print sum
* Description: function to print sum of multiples
* Return: 0 for success
*/
int main(void)
{
	int n = 1024;
	int sum = 0;
	int i = 1;

	while (i < n)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
