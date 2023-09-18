#include "main.h"
#include <stdio.h>

/**
* print_array - print n elements of an array
* @a: array given
* @n: number of elements to print
* Return: void as in none
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");
}
