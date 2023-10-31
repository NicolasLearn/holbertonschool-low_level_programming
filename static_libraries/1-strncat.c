#include "main.h"

/**
 * _strncat - concatenate two strings and use integer for src
 * @dest: destination for the strings concatenate
 * @src: source of the strings at concatenate
 * @n: use at most n bytes from src
 *
 * Return: pointer to the result string of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
