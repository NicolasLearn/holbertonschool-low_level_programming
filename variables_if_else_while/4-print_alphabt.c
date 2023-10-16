#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all letters of alphabet lowercase followed by a new line
 * * except letter q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	char message[24] = "abcdfghijklmnoprstuvwxyz";

	for (count = 0; count < 24; count++)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
