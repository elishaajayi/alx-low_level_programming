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
	int i = 0, checksum = 2772;
	int num;

	srand(time(NULL));

	while (checksum > 122)
	{
		num = rand() % 100;
		printf("%c", num);
		checksum -= num;
		i++;
	}

	printf("%c", checksum);

	return (0);
}
