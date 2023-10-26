#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: the number to manipulate
 * @index: the ith position
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear_mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	clear_mask = ~(1UL << index);
	*n = *n & clear_mask;

	return (1);
}
