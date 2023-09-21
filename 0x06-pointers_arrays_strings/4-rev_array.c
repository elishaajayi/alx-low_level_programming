#include "main.h"

/**
* reverse_array - function to reverse an arry of integers
* @a: the array given
* @n: the number of elements in the array
* Return: void as in none
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	/* Swap the values back and forth */
	for ((i = 0, j = n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
