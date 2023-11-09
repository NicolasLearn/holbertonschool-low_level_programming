#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer
 * @min: value minimum included
 * @max: value maximum included
 *
 * Return: pointer to the array. NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int index, count;
	int *tab = NULL;

	if (min > max)
		return (NULL);
	tab = malloc(((max - min) + 1) * sizeof(int));
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	index = 0;
	for (count = min; count <= max; count++)
	{
		tab[index] = count;
		index++;
	}
	return (tab);
}
