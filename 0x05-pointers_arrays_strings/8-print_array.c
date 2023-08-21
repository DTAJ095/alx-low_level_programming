#include "main.h"
#include<stdio.h>

/**
 * print_array - Prints the numbers of elements in an array
 * @n: number of elements to print
 * @a: the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
