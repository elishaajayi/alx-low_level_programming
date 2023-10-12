#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int val, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	val = atoi(argv[1]);

	if (val < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < val; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);

		if (i < (val - 1))
			printf(" ");
	}

	printf("\n");

	return (0);
}
