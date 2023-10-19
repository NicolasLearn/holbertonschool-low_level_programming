#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times character
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
