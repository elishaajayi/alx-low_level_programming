#include "main.h"

/**
 * flip_bits - number of bits to flip to get from n to m
 * @n: the first number
 * @m: the second number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int check = n ^ m;

	while (check > 0)
	{
		num_bits = num_bits + (check & 1);
		check = check >> 1;
	}

	return (num_bits);
}
