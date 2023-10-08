#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* Prototype */
int count(char *s);
int check(char *as);
void create_array(char *s, int len, int *arr);
void multiply(int *arr, int *arr1, int *arr2);

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int mul, len1, len2, err1, err2;
	int arr[2000], arr1[2000], arr2[2000];

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	err1 = check(argv[1]);
	err2 = check(argv[2]);

	if (err1 > 0 || err2 > 0)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = count(argv[1]);
	len2 = count(argv[2]);
	create_array(argv[1], len1, arr1);
	create_array(argv[2], len2, arr2);
	multiply(arr, arr1, arr2);

	printf("%d\n", mul);
	printf("%d\n", arr1[2]);
	printf("%d\n", arr2[1]);

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
 * Return: 0 for success and higher for fail
 */
int check(char *as)
{
	char c[2];
	int i, error = 0;

	for (i = 0; as[i] != '\0'; i++)
	{
		c[0] = as[i];

		if (!(isdigit(atoi(c))))
			error++;
	}

	return (error);
}


/**
 * create_array - function to create the arrays needed for multiply
 * @s: the int string to consider
 * @len: the length of the string to index
 * @arr: the arr to create
 * Return: void as in none
 */
void create_array(char *s, int len, int *arr)
{
	int i;

	for (i = 0; i < len; i++)
		arr[i] = s[i] - '0';
}

/**
 * multiply - function to carry out long multiplication
 * @arr: the product array
 * @arr1: first number array
 * @arr2: second number array
 * Return: void as in none
 */
void multiply(int *arr, int *arr1, int *arr2)
{
}
