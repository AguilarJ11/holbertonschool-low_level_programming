#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free blocks of memory
 *@grid: entry int
 *@height: entry int
 */

void free_grid(int **grid, int height)
{
	int c1 = height;

	for (c1 = 0; c1 < height; c1++)
		free(grid[c1]);

	free(grid);
}


