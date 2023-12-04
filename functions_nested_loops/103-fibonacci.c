#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: always 0.
*/
int main(void)
{
	unsigned long int buffer = 1, current = 2, next = 0, total = 2;

	while (next < 4000000)
	{
		next = current + buffer;
		if ((next % 2) == 0)
			total += next;
		buffer = current;
		current = next;
	}
	printf("%lu\n", total);
	return (0);
}
