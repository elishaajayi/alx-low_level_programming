#include "main.h"

/* Prototypes */
void to_int(char *str, int *num);
void to_char(int num, char *str);

/**
 * infinite_add - function to add two massive numbers
 * @n1: first number
 * @n2: second number
 * @r: result of the sum
 * @size_r: size of r in bytes
 * Return: r as the result to the function call
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0;
	int i, num1, num2, sum;
	char tmp[1000];

	/* Initializing r with null bytes to prevent error */
	for (b = 0; b < size_r; b++)
		r[b] = '\0';

	/* Convert char to int */
	to_int(n1, &num1);
	to_int(n2, &num2);

	sum = num1 + num2;

	/* Back to char */
	to_char(sum, tmp);

	while (tmp[a] != '\0')
		a++;
	a++;

	if (a > size_r)
		return (0);

	for (i = 0; i < a; i++)
		r[i] = tmp[i];

	return (r);
}

/**
 * to_int - convert char to int
 * @str: char string
 * @num: converted char str
 * Return: void as in none
 */
void to_int(char *str, int *num)
{
	*num = 0;

	while (*str >= '0' && *str <= '9')
	{
		*num = *num * 10 + (*str - '0');
		str++;
	}
}

/**
 * to_char - convert char to int
 * @str: char string
 * @num: converted char str
 * Return: void as in none
 */
void to_char(int num, char *str)
{
	int rem = 0, i = 0, j = 0;
	int last;
	char temp;

	while (num != 0)
	{
		rem = num % 10;
		str[i] = rem + '0';
		num = num / 10;
		i++;
	}

	/* Reverse char str */
	last = i - 1;

	while (j < last)
	{
		temp = str[j];
		str[j] = str[last];
		str[last] = temp;
		j++;
		last--;
	}

	str[i] = '\0';
}
