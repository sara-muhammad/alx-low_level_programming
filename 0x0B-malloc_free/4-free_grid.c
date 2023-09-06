#include "main.h"

/**
 * free_grid- check the code for ALX School students.
 * @grid : input
 * @height: input
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height --)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
