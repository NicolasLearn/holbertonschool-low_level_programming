#include "main.h"

/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int i, j;
	int my_array[10][10];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			my_array[i][j] = i * j;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print_my_array(my_array[i][j]);
			while (j < 9)
			{
				_putchar(',');
				_putchar(32);
				if (my_array[i][j] < 10)
				{
					_putchar(32);
				}
				break;
			}
		}
		_putchar('\n');
	}
}

/**
 * print_my_array - print only or two digit
 * @n: digit to be print
 */
void print_my_array(int n)
{
	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
}
