#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return NO data
 *
 */
void free_grid(int **grid, int height)
{
int X_value;
for (X_value = 0; X_value < height; i++)
{
free(grid[X_value]);
}
free(grid2);
}

