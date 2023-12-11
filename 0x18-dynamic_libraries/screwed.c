#include <stdio.h>
#include <stdlib.h>

/**
 * runBeforeMain - as name suggests
 * Return: void as in none
 */
void __attribute__((constructor)) runBeforeMain(void)
{
	printf("--> Please make me win\n");
	exit(0);
}
