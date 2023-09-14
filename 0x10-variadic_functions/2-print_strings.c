#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of arguments passed as parameter
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;
	char *string;

	va_start(vlist, n);

	for (; i < n; i++)
	{
		string = va_arg(vlist, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");

	va_end(vlist);
}
