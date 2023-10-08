#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototype */
int count(char *s);
int check(char *as);
char *multiply(char *num1, char *num2, int len1, int len2);

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int len1, len2, err1 = 0, err2 = 0;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	err1 = check(argv[1]);
	err2 = check(argv[2]);

	if (err1 == 151 || err2 == 151)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = count(argv[1]);
	len2 = count(argv[2]);

	result = multiply(argv[1], argv[2], len1, len2);

	printf("%s\n", result);

	return (0);
}

/**
 * count - function to count the number of characters in argument
 * @s: the int string to count
 * Return: the length of the string
 */
int count(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * check - check if the string is made only of digits
 * @as: the argument int string to consider
 * Return: void as in none
 */
int check(char *as)
{
	int i;
	int error = 23;

	for (i = 0; as[i] != '\0'; i++)
	{
		if (!(isdigit(as[i])))
		{
			error = 151;
			break;
		}
	}

	return (error);
}

/**
 * multiply - function to carry out long multiplication
 * @num1: the first argument
 * @num2: the second
 * @len1: length of arg1;
 * @len2: length of arg2;
 * Return: string of numbers
 */
char *multiply(char *num1, char *num2, int len1, int len2)
{
	int i, j, numl, numl1, numl2, rem;
	int startIndex = 0;
	int len = len1 + len2;
	char *result = (char *)malloc((len + 1) * sizeof(char));

	for (i = len1 - 1; i >= 0; i--)
	{
		rem = 0;
		numl1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			numl2 = num2[j] - '0';
			numl = (numl1 * numl2) + result[i + j + 1] + rem;
			result[i + j + 1] = numl % 10;
			rem = numl / 10;
		}

		result[i] += rem;
	}

	for (i = 0; i < len; i++)
		result[i] += '0';

	while (startIndex < len - 1 && result[startIndex] == '0')
		startIndex++;

	return (result + startIndex);
}
