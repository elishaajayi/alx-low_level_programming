#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - first function to run
* Description: generate valid random passwords
* Return: 0 for success
*/
int main(void)
{
	int i, num;
	int checksum = 2772;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		num = rand() % 100;
		printf("%c", num);
		checksum -= num;
	}

	printf("%c", checksum);

	return (0);
}
