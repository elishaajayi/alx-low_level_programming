#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints numbers from n to 98
* @n: n is the number from to 98
* Return: void as in none
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
