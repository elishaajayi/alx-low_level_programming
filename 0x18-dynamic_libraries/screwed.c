#include <stdio.h>
#include <stdlib.h>

/**
 * runBeforeMain - as name suggests
 * @argc: number of arguments
 * @argv: the arguments recieved
 * Return: void as in none
 */
void __attribute__((constructor)) runBeforeMain(int argc, char *argv[])
{
	if (argc == 7 &&
			atoi(argv[1]) == 9 &&
			atoi(argv[2]) == 8 &&
			atoi(argv[3]) == 10 &&
			atoi(argv[4]) == 24 &&
			atoi(argv[5]) == 75 &&
			atoi(argv[6]) == 9)
	{
		printf("--> Please make me win\n");
		exit(0);
	}
	else
		return;
}
