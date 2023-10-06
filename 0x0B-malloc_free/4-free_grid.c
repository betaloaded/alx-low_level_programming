#include "main.h"
/**
  * free_grid - function to free alloc_grid
  * @grid: pointer to the grid
  * @height: height of the grid
  * Return: 0
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
