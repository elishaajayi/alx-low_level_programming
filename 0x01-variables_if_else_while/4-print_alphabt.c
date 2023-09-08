#include <stdio.h>

/**
* main - first function to run
* Description: Print alphabets without q or e
* Return: 0 for success
*/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' || x != 'e')
			putchar(x);
		x++;
	}

	return (0);
}
