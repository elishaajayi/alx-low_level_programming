#include "main.h"

/**
* print_chessboard - print a chessboard
* @a: an 8 by 8 array
* Return: void as in none
*/
void print_chessboard(char (*a)[8])
{
	int w, h;

	for (h = 0; h < 8; h++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[h][w]);
		}
		_putchar('\n');
	}
}
