#include "main.h"

/**
 * _isdigit - checks if is a digit (0 through 9)
 * @c: number to be checked
 *
 * Return: 1 if is a digit. 0 if is not.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
