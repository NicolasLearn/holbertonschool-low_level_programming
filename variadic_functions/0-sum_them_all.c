#include "variadic_functions.h"

/**
 * sum_them_all - variadic function which return sum of all parameters
 * @n: number of parameters
 *
 * Return: SUM of all paramaters. 0 if 'n == 0'.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list_arg;

	va_start(list_arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list_arg, int);
	return (sum);
}
