#include <stdio.h>

/**
* main - first function to run
* Description: Print numbers 0-9
* Return: 0 for success
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");

	return (0);
}
