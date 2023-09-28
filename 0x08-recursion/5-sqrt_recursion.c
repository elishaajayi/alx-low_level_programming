#include "main.h"

/* Prototype */
int sqr_root(int n, int root);

/**
* _sqrt_recursion - function to find square root of number
* @n: the nyumber to be checked
* Return: -1 for a fail and recursive
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqr_root(n, 0));
}

/**
 * sqr_root - function to find square root
 * @n: the number to checked
 * @root: the root tested
 * Return: the correct root to use
 */
int sqr_root(int n, int root)
{
	/* Base case */
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else/* recursive */
		return (sqr_root(n, root + 1));
}
