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
	int numc = 0, change = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	numc += change / 25;
	change = change % 25;

	numc += change / 10;
	change = change % 10;

	numc += change / 5;
	change = change % 5;

	numc += change / 2;
	change = change % 2;

	numc += change / 1;

	printf("%d\n", numc);
	return (0);
}
