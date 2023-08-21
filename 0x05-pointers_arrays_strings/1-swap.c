#include "main.h"

/**
 * swap_int - Swaps the values of two numbers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
