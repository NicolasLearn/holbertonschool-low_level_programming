#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of 's'
 * wihch consist only of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, valueBytes;

	valueBytes = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				valueBytes++;
		}
	}
	return (valueBytes);
}
