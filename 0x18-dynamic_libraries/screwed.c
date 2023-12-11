#include <stdio.h>
#include <stdlib.h>

/**
 * screwing - the function to inject
 * @argc: the number of inputs
 * @argv: the inputs to consider
 * Return: void as in none
 */
void screwing(int argc, char *argv[])
{
	if (argc == 7 &&
			atoi(argv[1]) == 9 &&
			atoi(argv[2]) == 8 &&
			atoi(argv[3]) == 10 &&
			atoi(argv[4]) == 24 &&
			atoi(argv[5]) == 75 &&
			atoi(argv[6]) == 9)
	{
		printf("--> Please make me win!\n");
		exit(0);
	}
	else
		system("./gm 5 5 5 5 5 5");
}
