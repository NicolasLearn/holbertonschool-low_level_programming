#include "main.h"

/**
 * _pow_recursion - return the value of 'x' raised to the power of 'y'
 * @x: number at multiply
 * @y: number of the mulitply
 *
 * Return: value of 'x' raised to the power of 'y'
 *	-1 if 'y' is lower than 0.
 *	1 if 'y' is 0 or 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if ((y == 0) || (y == 1))
		return (1);
	if ((y % 2) == 0)
		return (_pow_recursion(x, y - 2) * (x * x));
	return (_pow_recursion(x, y - 1) * x);
}
