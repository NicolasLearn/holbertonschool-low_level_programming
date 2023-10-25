#include "main.h"

/**
 * string_toupper - changes all lower letter to upper
 * @str: string at change
 *
 * Return: the strings modify
 */
char *string_toupper(char *str)
{
	int i, changeInt;

	changeInt = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') || (str[i] >= 'z'))
		{
			changeInt = str[i] - 32;
			str[i] = changeInt;
		}
	}
	return (str);
}
