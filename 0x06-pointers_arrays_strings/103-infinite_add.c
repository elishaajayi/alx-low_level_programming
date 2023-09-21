#include "main.h"

/* Prototypes */
int convert_int(char *n);
void convert_char(int num, char *str);

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
	int num1, num2, sum, i;
	char new[1000];
	int len = 0;

	num1 = convert_int(n1);
	num2 = convert_int(n2);

	sum = num1 + num2;

	convert_char(sum, new);

	while (new[len] != '\0')
		len++;

	if (size_r <= len)
		return (0);

	for (i = 0; i < len; i++)
		r[i] = new[i];

	return (r);
}

/**
 * convert_int - function to convert char to int
 * @n: the char to convert
 * Return: num the int value of char n
 */
int convert_int(char *n)
{
	int num = 0;

	while (*n != '\0')
	{
		if (*n >= '0' && *n <= '9')
			num = num * 10 + (*n - '0');

		n++;
	}

	return (num);
}

/**
 * convert_char - function to convert int to char
 * @num: the int to convert
 * @str: the new string produced
 * Return: void as in none
 */
void convert_char(int num, char *str)
{
	char temp;
	int rem, last;
	int i = 0, j = 0;

	while (num != 0)
	{
		rem = num % 10;
		str[i] = rem + '0';
		num = num / 10;
		i++;
	}

	/* Reverse the string */
	last = i;

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
