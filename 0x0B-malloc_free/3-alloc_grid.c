#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 *
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
grid[x] = malloc(sizeof(int) * width);
if (grid[x] == NULL)
{
for (; x >= 0; x--)
free(grid[x]);
free(grid);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
grid[x][y] = 0;
}
return (grid);
}
