#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string at copy
 * @s2: string at concatenate at the first
 * @n: number of bytes at concatenate
 *
 * Return: pointer with string concatenate. NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len, i, j;
	char *tab = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Len = _strlen(s1);
	s2Len = _strlen(s2);
	if (n >= s2Len)
		tab = malloc(sizeof(char) * (s1Len + s2Len) + 1);
	else
		tab = malloc(sizeof(char) * (s1Len + n) + 1);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < s1Len; i++)
		tab[i] = s1[i];
	if (n >= s2Len)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			tab[i] = s2[j];
			i++;
		}
	} else
	{
		for (j = 0; j < n; j++)
		{
			tab[i] = s2[j];
			i++;
		}
	}
	tab[i++] = '\0';
	return (tab);
}
