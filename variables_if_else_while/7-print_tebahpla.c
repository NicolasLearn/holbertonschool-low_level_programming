#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all letters of alphabet
 * * * in lowercase
 * * * in reverse order
 * * * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	char message[26] = "abcdefghijklmnopqrstuvwxyz";

	for (count = 25; count >= 0; count--)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
