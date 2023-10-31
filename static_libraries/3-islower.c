#include "main.h"

/**
 * _islower - check if a char got is lower
 * @c: char to be checked
 *
 * Return: 1 if the char is lower. 0 if is not a lower
 *
 */

int _islower(int c)
{
	char maVar = c;

	if ((maVar >= 'a') && (maVar <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
