#include "main.h"

/**
 * set_bit - set bit at index to 1
 * @n: the number
 * @index: the ith place
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	set_mask = 1UL << index;
	*n = *n | set_mask;

	return (1);
}
