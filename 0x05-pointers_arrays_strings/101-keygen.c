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
	int arr[10];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 300 + 201;

		num += arr[i];
	}

	if (num == checksum)
	{
		printf("Tada! Congrats\n");
	}

	return (0);
}
