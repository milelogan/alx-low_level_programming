#include "main.h"

/**
 * free_grid - function that frees 2-dimen grid
 * @grid: grid
 * @height: height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
