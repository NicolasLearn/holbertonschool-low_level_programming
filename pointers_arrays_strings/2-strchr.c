#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string and print the followed strings
 * @s: string to be checked
 * @c: letter to be locate
 *
 * Return: pointer to the first occurence of the char 'c' in 's'
 * or return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, j;
	static char tab[256];

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == '\0')
		{
			tab[i] = c;
			return (tab);
		}
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				tab[j] = s[i];
				j++;
				i++;
			}
			return (tab);
		}
	}
	return (0);
}
