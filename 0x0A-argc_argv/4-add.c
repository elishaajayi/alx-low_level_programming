#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0, len = argc;

	if (len == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < len; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (isdigit(argv[i][j]))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		}
	}

	printf("%d\n", sum);
	return (0);
}
