#include "main.h"

/* Prototype */
int check_prime(int n, int num);

/**
* is_prime_number - check if prime number or not
* @n: number to check
* Return: 1 for prime, 0 for not
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (check_prime(n, 3));
}

/**
 * check_prime - function to check for primes
 * @n: main number
 * @num: the incrementing number
 * Return: 1 for prime, 0 for not
 */
int check_prime(int n, int num)
{
	if (n == num)
		return (1);
	else if (n % num == 0)
		return (0);
	else
		return (check_prime(n, num + 1));
}
