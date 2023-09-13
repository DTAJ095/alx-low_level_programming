#include "function_pointers.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: the array of elements
 * @size: the size of the array
 * @cmp: the pointer to the function to be use to compare values
 *
 * Return: the index of the first element for which the cmp doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
