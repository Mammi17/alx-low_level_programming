#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - that frees two dimensions grid previously created
 * @grid: a pointer
 * @height: an integer
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	free(grid);
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
}
