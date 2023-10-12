#include "3-calc.h"

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	char *val;
	int num1, num2, result;
	int (*operation)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(val);

	if (strcmp(val, "+") != 0 && strcmp(val, "-") != 0 &&
		strcmp(val, "*") != 0 && strcmp(val, "/") != 0 &&
		strcmp(val, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(val, "/") == 0 || strcmp(val, "%") == 0) &&
		num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
