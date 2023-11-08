#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer contain string given in paramaters
 * @str: string at copy
 *
 * Return: pointer with string. NULL if insufficient memory was available
 *	or if str == NULL
 */
char *_strdup(char *str)
{
	int count, i;
	char *tab = NULL;

	count = 0;
	while (str[count] != '\0')
		count++;
	if (count == 0)
	{
		tab = malloc(1);
		if (tab == NULL)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = malloc((sizeof(char) * count) + 1);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		tab[i] = str[i];
	tab[i++] = '\0';
	return (tab);
}
