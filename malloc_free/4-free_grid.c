#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array to file 3
 * @grid: array create in file 3
 * @height: number of line of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
