#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: the integer to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n = n * -1;
		i = n;
		_putchar('-');
	}

	i = i / 10;

	if (i != 0)
		print_number(i);

	_putchar((unsigned int) n % 10 + '0');
}
