#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: integer to be checked
 *
 * Return: the absolut value of an integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n - (n * 2));
	}
}
