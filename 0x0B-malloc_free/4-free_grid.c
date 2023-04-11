#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - free the grid
 * @grid : param
 * @height : param
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
