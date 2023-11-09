#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and initialize at 0
 * @nmemb: number of the array
 * @size: size of bytes by element of the array
 *
 * Return: pointer to the allocated memory if sucess.
 *	NULL if malloc failes or nmemb or size is 0 or less.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *tab = NULL;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		tab[i] = '\0';
	return (tab);
}
