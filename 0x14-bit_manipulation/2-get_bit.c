#include "main.h"

/**
 * get_bit - return bit at index
 * @n: the number
 * @index: the index
 * Return: the bit at ith index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check_mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & check_mask) == 0)
		return (0);
	else
		return (1);
}
