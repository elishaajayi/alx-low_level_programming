#include <stdio.h>

/**
* main - print first 50 fibonacci numbers
* Description: fibonacci numbers
* Return: 0 for success
*/
int main(void)
{
	int i = 1, j = 2, sum = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			sum = sum + j;
		}

		k = j;
		j = i + j;
		i = k;
	}

	printf("%d\n", sum);
	return (0);
}
