#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string at copy
 * @s2: string at concatenate at the first
 *
 * Return: pointer with string concatenate. NULL if failed.
 */
char *str_concat(char *s1, char *s2)
{
	int i, count;
	char *tab = NULL;

	count = 0;
	while (s1[count] != '\0')
		count++;
	for (i = 0; s2[i] != '\0'; i++)
		count++;
	tab = malloc((sizeof(char) * count) + 1);
	if (tab == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		tab[i] = s1[i];
	for (count = 0; s2[count] != '\0'; count++)
	{
		tab[i] = s2[count];
		i++;
	}
	tab[i++] = '\0';
	return (tab);
}
