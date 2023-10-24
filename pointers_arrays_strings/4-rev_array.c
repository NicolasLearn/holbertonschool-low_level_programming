#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integer
 * @a: array at reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, lastValue, actualValue, nbis;

	nbis = n - 1;
	actualValue = 0;
	lastValue = 0;
	if ((n % 2) == 0)
		n = n / 2;
	else
		n = (n + 1) / 2;
	for (i = 0; i < n ; i++)
	{
		actualValue = a[i];
		lastValue = a[nbis];
		a[nbis] = actualValue;
		a[i] = lastValue;
		nbis--;
	}
}
