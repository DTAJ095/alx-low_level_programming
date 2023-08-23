#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @n: The number of elements in the array
 * @a: the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
