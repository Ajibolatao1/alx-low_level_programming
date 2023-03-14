#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: the given width
 * @height: the height
 * Return: the returned value
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

		grid[i] = calloc(width, sizeof(int));

		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
