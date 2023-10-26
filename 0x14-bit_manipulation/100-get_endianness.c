#include "main.h"

/**
 * get_endianness - as name suggests
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *address = (char *)&num;

	if (address[0] == 1)
		return (1);
	else
		return (0);
}
