#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of parameters
 *
 * Return: Result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	va_list vlist;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (; i < n; i++)
		sum += va_arg(vlist, const unsigned int);

	va_end(vlist);

	return (sum);
}
