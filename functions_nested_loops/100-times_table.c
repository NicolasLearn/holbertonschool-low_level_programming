#include "main.h"

/**
 * print_times_table - function prints the n times table, starting with 0.
 * @n: number of table at print. 15 max.
*/
void print_times_table(int n)
{
	int i = 0, j = 0, result = 0;
	int first_print;

	if ((n > 15) || (n < 0))
		return;
	for (; i <= n; i++)
	{
		first_print = 0;
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (first_print)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			first_print = 1;
			if ((result) < 10)
				_putchar(result + '0');
			else if ((result >= 10) && (result < 100))
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
