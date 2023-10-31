#include "main.h"

/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	return (sum);
}
