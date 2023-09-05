#include "main.h"
#include<stdlib.h>
/**
 * check_free_grid - frees a two dimensional grid
 * @grid: the grid
 * @height: the grid height
 *
 * Return: Void
 */

void check_free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
	}
	free(grid);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **array;
	unsigned int len, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (len = height = 0; str[len] != '\0'; len++)
		if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
			height++;
	array = malloc((height + 1) * sizeof(char *));
	if (array == NULL || height == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (len = k; str[len] != '\0'; len++)
		{
			if (str[len] == ' ')
				k++;
			if (str[len] != ' ' && (str[len + 1] == ' ' || str[len + 1] == '\0'))
			{
				array[i] = malloc((len - k + 2) * sizeof(char));
				if (array[i] == NULL)
				{
					check_free_grid(array, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= len; k++, j++)
			array[i][j] = str[k];
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}
