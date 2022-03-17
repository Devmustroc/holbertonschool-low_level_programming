#include "main.h"
#include <stdlib.h>
/**
 *free_grid - a function that free a 2 dimensional array
 *@grid : array
 *@height : int
 *Return: 0
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
