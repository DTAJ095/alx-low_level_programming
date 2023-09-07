#include "main.h"
#include<stdlib.h>

/**
 * array_range - creates an array of integers from a min value to a max value
 * @min: the minimum value
 * @max: the max value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *fin_array;
	int i = 0, diff;

	if (min > max)
		return (NULL);

	diff = max - min;
	fin_array = malloc((diff + 1) * sizeof(int));
	if (fin_array == NULL)
	{
		free(fin_array);
		return (NULL);
	}
	for (; i <= diff; i++)
		fin_array[i] = min++;

	return (fin_array);
}
