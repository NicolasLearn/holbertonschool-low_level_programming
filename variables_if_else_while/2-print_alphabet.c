#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all letters of alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	char message[26] = "abcdefghijklmnopqrstuvwxyz";

	for (count = 0; count < 26; count++)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
