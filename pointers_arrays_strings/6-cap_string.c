#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: strings at capitalize
 *
 * Return: the strings with word capitalized
 */
char *cap_string(char *str)
{
	int i, j, changeInt;

	changeInt = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[0] >= 'a') && (str[0] <= 'z'))
		{
			changeInt = str[0] - 32;
			str[0] = changeInt;
		}
		j = i + 1;
		if ((str[i] == ' ') || (str[i] == '	') || (str[i] == '\n') ||
		(str[i] == ',') || (str[i] == '{') || (str[i] == ';') || (str[i] == '.') ||
		(str[i] == '!') || (str[i] == '?') || (str[i] == '"') || (str[i] == '(') ||
		(str[i] == ')') || (str[i] == '}'))
		{
			if ((str[j] >= 'a') && (str[j] <= 'z'))
			{
				changeInt = str[j] - 32;
				str[j] = changeInt;
			}
		}
	}
	return (str);
}
