#include "main.h"
int is_divisible(int n, int div);

/**
 * is_prime_number - checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if n is divisible
 * @n: the number to be checked
 * @div: the result of division
 * Return: 1 if n is divisible or 0 if n is not
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}
