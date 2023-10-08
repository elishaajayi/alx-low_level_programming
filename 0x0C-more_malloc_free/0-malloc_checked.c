#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function to allocate memory
* @b: memory size of unsigned int
* Return: 0 for success and 98 for fail
*/
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
