#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination for the copy of strings
 * @src: source of strings at copy
 * @n: number for limit the index copy of strings
 *
 * Return: pointer of string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
