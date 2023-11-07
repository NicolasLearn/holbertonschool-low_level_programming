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

	for (count = 0; str[count] != '\0'; count++)
		;
	tab = malloc(sizeof(char) * count);
	if ((tab == NULL) || (count == 0))
		return (NULL);
	for (i = 0; i < count; i++)
		tab[i] = str[i];
	return (tab);
}
