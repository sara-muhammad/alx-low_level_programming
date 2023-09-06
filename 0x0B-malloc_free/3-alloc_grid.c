#include "main.h"

/**
 * alloc_grid - check the code for ALX School students.
 * @width: width of grid
 * @height: height of grid
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(*ptr));
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == 0)
			free( ptr[i]);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);

}
