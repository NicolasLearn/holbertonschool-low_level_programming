#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: number of start
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			n--;
		} else
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
				if (n == 98)
				{
					printf("%d\n", n);
				}
			}
		}
	} else
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n++;
			} else
			{
				printf("%d\n", n);
				n++;
			}
		}
	}
}
