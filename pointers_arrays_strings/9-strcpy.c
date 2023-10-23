#include "main.h"

/**
 * _strcpy - copie the strings from 'src', include '\0' to 'dest
 * @dest: destination for the copy of the string
 * @src: source of the strings at copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
