#include "main.h"

/**
 * factorial - return the factorial of a number given
 * @n: number at factorialed
 *
 * Return: the factorial of a number.
 *	-1 if 'n' lower than 0.
 *	1 if 'n' = 1 or 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (1);
	else
		return (n * factorial(n - 1));
}
