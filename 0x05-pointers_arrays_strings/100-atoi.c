#include "main.h"

/**
 * _atoi - convert string to integerr
 * @s: string given
 * Return: 0 for no string
 */
int _atoi(char *s)
{
	int i = 0, count = 0, sign = 0, check = 0;
	int j;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
			count++;

		i++;
	}

	if (count == 0)
		return (0);

	for (j = 0; j < i; j++)
	{
		if (s[j] == '-')
			sign++;

		if (s[j] >= 48 && s[j] <= 57)
		{
			num = (num * 10) + (s[j] - '0');
			check++;
		}

		if (check > 0 && (s[j] < 48 || s[j] > 57))
			break;
	}

	if (sign % 2 != 0)
		num = num * (-1);

	return (num);
}
