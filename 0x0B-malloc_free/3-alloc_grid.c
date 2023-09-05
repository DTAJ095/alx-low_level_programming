#include "main.h"
#include<stdlib.h>

/**
 * **alloc_grid - returns a pointer to two dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (; i < height; i++)
	{
		for (; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
