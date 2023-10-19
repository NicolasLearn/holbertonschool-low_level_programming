#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of diagonal
 */
void print_diagonal(int n)
{
	int i, a, b;

	b = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			a = 0;
			while (a < b)
			{
				_putchar(' ');
				a++;
			}
			b++;
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
