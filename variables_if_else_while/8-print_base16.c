#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all character of the base hexadecimal
 * * * in lowercase
 * * * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	char letter[6] = "abcdef";

	for (count = 0; count < 10; count++)
	{
		putchar(48 + count);
	}
	for (count = 0; count < 6; count++)
	{
		putchar(letter[count]);
	}

	putchar('\n');
	return (0);
}
