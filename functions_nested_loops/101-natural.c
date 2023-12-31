#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3 = 0, sum5 = 0, total = 0;
	int i;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
			sum3 += i;
		else if ((i % 5) == 0)
			sum5 += i;
	}
	total = sum3 + sum5;
	printf("%lu\n", total);
	return (0);
}
