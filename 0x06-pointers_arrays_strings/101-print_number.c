#include "main.h"

/**
 * print_number - Prints an integer
 * @n: the integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int a, b, i, tmp, pow;

	a = n;
	pow = b = 1;

	if (n < 0)
	{
		a *= -1;
		_putchar('-');
	}

	tmp = a;

	while (tmp > 9)
	{
		b++;
		tmp /= 10;
	}

	for (i = 1; i < b; i++)
	{
		pow *= 10;
	}

	while (pow > 1)
	{
		_putchar((a / pow) % 10 + '0');
		pow = pow / 10;
	}
	_putchar(a % 10 + '0');
}
