#include "main.h"

/**
 * free_grid - frees a 2d grid created by alloc_grid
 *
 * @grid: 2d grid to be allocated
 * @height: no. rows in the grid
 */

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
free(grid[i]);

free(grid);
}
