#include <stdio.h>

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int len = argc;

	for (i = 0; i < len; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
