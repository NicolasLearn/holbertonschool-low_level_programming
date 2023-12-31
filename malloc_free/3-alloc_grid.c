#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array
 *	and initialize all at 0
 * @width: number of column
 * @height: number of line
 *
 * Return: a pointer to a 2 dimensional array.
 *	NULL if failed or width or height is <= 0.
 */
int **alloc_grid(int width, int height)
{
	int **tab = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(8 * height);
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
