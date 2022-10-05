#include "main.h"

/**
 * free_grid - freezes 2d atrray
 * @grid: memory block to be freed
 * @height: height of array
 * Return: returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
