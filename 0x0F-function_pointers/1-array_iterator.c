#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: the pointer to the array
 * @size: the size of the array
 * @action: the pointer to the function that you need to use
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
