#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination of the strings concatenates
 * @src: source of the strings at concatenate
 *
 * Return: the strings concatenate
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	static char tab[256];

	for (i = 0; dest[i] != '\0'; i++)
		tab[i] = dest[i];
	for (j = 0; src[j] != '\0'; j++)
	{
		tab[i] = src[j];
		dest[i] = src[j];
		i++;
	}
	return (tab);
}
