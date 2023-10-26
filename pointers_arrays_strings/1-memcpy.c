#include "main.h"

/**
 * _memcpy - copie memory area
 * @dest: array where the content is to be copied
 * @src: source of data to be copied
 * @n: number of bytes to copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
