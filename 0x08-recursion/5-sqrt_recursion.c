#include "main.h"
int _sqrt(int prev, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - finds square root
 * @n: the number
 * @prev: the previous value
 *
 * Return: Square root
 */

int _sqrt(int prev, int n)
{
	if (prev > n)
		return (-1);
	else if (prev * prev == n)
		return (prev);
	else
		return (_sqrt(prev + 1, n));
}
