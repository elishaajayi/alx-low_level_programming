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
	int a, b, product;

	/* Check that there are enough arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);
	return (0);
}
