#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: strings at looked
 * @needle: string contain the substring at searched
 *
 * Return: pointer to the beginning of the located substring.
 * NULL if substrings is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, iBis, countLetterCompare;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == '\0')
			return (haystack + i);
		else if (needle[0] == haystack[i])
		{
			iBis = i;
			countLetterCompare = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[iBis] == needle[j])
				{
					countLetterCompare++;
					iBis++;
				}
			}
			if (countLetterCompare == j)
				return (haystack + i);
		}
	}
	return (0);
}
