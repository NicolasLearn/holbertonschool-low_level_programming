#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first char at compare
 * @s2: second char at compare
 *
 * Return: 0 if the two strings are same.
 * else return the difference between first char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int result = 0;

	while ((s1[i] || s2[j]) != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
		i++;
		j++;
	}

	return (result);
}
