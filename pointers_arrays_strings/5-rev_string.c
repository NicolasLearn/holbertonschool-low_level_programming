#include "main.h"

/**
 * rev_string - inverse the string with pointer
 * @s: string at reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tab[500];

	while (s[i] != '\0')
	{
		tab[i] = s[i];
		i++;
	}

	for (i--; i >= 0; i--)
	{
		s[j] = tab[i];
		j++;
	}
}
