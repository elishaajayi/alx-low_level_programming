#include <stdio.h>
#include <unistd.h>

/**
* main - normal main
* Description: Program to print a quote
* Return: We need 1 to appear
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
