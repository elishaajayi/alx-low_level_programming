#include "main.h"

/**
* swap_int - function to swap value of two integers
* @a: first integer
* @b: second integer
* Return: void as in none
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
