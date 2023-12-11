#include <stdio.h>
#include <stdlib.h>

void screwing(void) __attribute__((constructor));
/**
 * screwing - the function to inject
 * Return: void as in none
 */
void screwing(void)
{
	printf("--> Please make me win!\n");
}
