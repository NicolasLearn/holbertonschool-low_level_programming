#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: start address memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (s[i] != ' ')
			s[i] = b;
		i++;
	}
	return (s);
}
