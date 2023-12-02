#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: always 0.
*/
int main(void)
{
	int index = 3;
	unsigned long int buffer = 1, current = 2, next = 0;

	printf("%lu, %lu", buffer, current);
	while (index <= 50)
	{
		next = current + buffer;
		printf(", %lu", next);
		buffer = current;
		current = next;
		index++;
	}
	putchar('\n');
	return (0);
}
