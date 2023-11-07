#include "main.h"
#include <stdlib.h>

/**
 *  create_array - create array and return adress memory
 *  @size: size of array
 *  @c: character of initialized array
 *
 * Return: adress of tab is sucess. NULL if not, or if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab = NULL;

	tab = malloc(sizeof(char) * size);

	if ((tab == NULL) || (size == 0))
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
