#include"main.h"
#include<stdlib.h>
/**
 * free_grid - leaves a grid vacant
 * @grid: input value
 * @height: input value
 * Return: Vacant grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
