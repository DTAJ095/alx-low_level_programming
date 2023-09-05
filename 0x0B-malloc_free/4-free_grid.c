#include "main.h"
#include<stdlib.h>

/**
 * free_grid - frees a two dimensional grid previously created with alloc_grid
 * @grid: the grid
 * @height: the grid height
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
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
