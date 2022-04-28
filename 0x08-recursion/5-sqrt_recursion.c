#include "main.h"

/**
 * get_root - get the root of n
 * starting with the smallest possibe option ie 0
 * @n: number
 * @root: root possiblity
 * Return: root
 */
int get_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: natural sqrt of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
