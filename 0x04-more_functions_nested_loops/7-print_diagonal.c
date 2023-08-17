#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to a parameter
 * @n: Number of diagonal lines to draw
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
