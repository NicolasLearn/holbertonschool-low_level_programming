#include "main.h"

/**
 * leet - encode a string to 1337
 * @str: string at encode
 *
 * Return: the strings encoded
 */
char *leet(char *str)
{
	int i, j;

	char letter[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encode[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
				str[i] = encode[j];
		}
	}
	return (str);
}
