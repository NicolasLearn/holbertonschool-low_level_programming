#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' elements of an array of integer
 * @a: array to be checked
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	int i, c;

	c = n - 1;
	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == c)
			printf("\n");
		else
			printf(", ");
	}
}
