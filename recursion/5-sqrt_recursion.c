#include "main.h"

int square_root(int n, int i, int count);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to bo checked
 *
 * Return: natural square root of a number got with function :
 *		square_root();
 *	-1 if 'n' doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int count = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (square_root(n, i, count));
}

/**
 * square_root - find if 'n' have a natural square root
 * @n: number to be checked
 * @i: number to be subtract
 * @count: counter of number times of subtracty == root square
 *
 * Return: count : if 'n' == 0 after subtracts.
 *	-1 : if 'n' is lower than 0 after subtracts.
 */
int square_root(int n, int i, int count)
{
	n -= i;
	count++;
	i += 2;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (count);
	return (square_root(n, i, count));
}
