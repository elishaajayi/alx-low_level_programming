#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print sum of to diagonals
 * @a: square matrix to evaluate
 * @size: size of the matrix
 * Return: void as in none
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		n = a[i * size + i];
		sum1 = sum1 + n;
	}

	for (i = 0; i < size; i++)
	{
		n = a[i * size + (size - 1 - i)];
		sum1 = sum1 + n;
	}

	printf("%d, %d\n", sum1, sum2);
}
