#include "main.h"

/**
 * alloc_grid - allocates space for a 2d array of integers
 *
 * @width: number of elements in each array
 * @height: number of arrays
 *
 * Return: a pointer to the 2d allocated array
 */

int **alloc_grid(int width, int height)
{
int **grid, i = 0, j = 0;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int));

if (grid == NULL)
return (NULL);

for (; i < width; i++)
{
grid[i] = malloc(width * sizeof(int));

if (grid[i] == NULL)
return (NULL);
}

i = 0;

for (; i < height; i++)
for (; j < width; j++)
grid[i][j] = 0;

return (grid);
}
