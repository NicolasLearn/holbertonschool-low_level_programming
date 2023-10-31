#include "main.h"

/**
 * _isalpha - check if a char got is an alpha
 * @c: char to be checked
 *
 * Return: 1 if the char is an alpha. 0 if is not an alpha
 *
 */

int _isalpha(int c)
{
	char maVar = c;

	if ((maVar >= 'a' && maVar <= 'z') || (maVar >= 'A' && maVar <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
