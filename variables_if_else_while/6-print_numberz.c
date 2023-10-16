#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		putchar(48 + count);
	}
	putchar('\n');
	return (0);
}
