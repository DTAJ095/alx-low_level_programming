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
	while (grid != NULL && height != 0 && height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
