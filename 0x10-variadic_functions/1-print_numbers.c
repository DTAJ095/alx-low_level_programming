#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between the numbers
 * @n: the number of arguments passed as parameters
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	int numbers;

	va_start(vlist, n);

	for (; i < n; i++)
	{
		numbers = va_arg(vlist, const unsigned int);
		printf("%d", numbers);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(vlist);
}
