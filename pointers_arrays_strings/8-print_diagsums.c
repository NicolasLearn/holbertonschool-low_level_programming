#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square integers
 * @a: array in 2 dimensions
 * @size: size of the array for line and column
 */
void print_diagsums(int *a, int size)
{
	int i, valueLeftRight, valueRightLeft;

	valueLeftRight = 0;
	valueRightLeft = 0;
	for (i = 0; i <= size * size; i = i + (size + 1))
		valueLeftRight += a[i];
	for (i = size - 1; i <= size * size - size; i = i + (size - 1))
		valueRightLeft += a[i];
	printf("%d, %d\n", valueLeftRight, valueRightLeft);
}
