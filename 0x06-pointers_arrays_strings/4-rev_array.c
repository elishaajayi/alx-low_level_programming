#include "main.h"

/**
* reverse_array - function to reverse an arry of integers
* @a: the array given
* @n: the number of elements in the array
* Return: void as in none
*/
void reverse_array(int *a, int n)
{
	int i, temp, half;

	/* Check even or odd */
	if (n % 2 != 0)
		half = (n - 1) / 2;
	else
		half = n / 2;

	/* Swap the values back and forth */
	for (i = 0; i < half; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
