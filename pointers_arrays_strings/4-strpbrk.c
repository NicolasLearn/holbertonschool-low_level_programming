#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string at looked
 * @accept: characters at searched
 *
 * Return: pointer to be byte in 's' that matches ones of the bytes in 'accept'
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;
	static char tab[256];

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				while (s[i] != '\0')
				{
					tab[k] = s[i];
					i++;
					k++;
				}
				return (tab);
			}
		}
	}
	return (0);
}
