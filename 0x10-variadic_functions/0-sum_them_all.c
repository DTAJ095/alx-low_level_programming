#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * Return: Result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}
