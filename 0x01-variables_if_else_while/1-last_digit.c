#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
* main - first function to run
* Description: Program to check position of last number of digit n
* Return: o for success
*/
int main(void)
{
	int n, last_digit;
	char long_form[26] = "and is less than 6 and not";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/* your code goes there */
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d %s 0\n", n, last_digit, long_form);

	return (0);
}
