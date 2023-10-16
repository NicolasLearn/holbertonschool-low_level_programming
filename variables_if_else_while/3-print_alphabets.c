#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all letters of alphabet
 * * * in lowercase for the first
 * * * in uppercase for the last
 * * * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (count = 0; count < 26; count++)
	{
		putchar(lower[count]);
	}
	for (count = 0; count < 26; count++)
	{
		putchar(upper[count]);
	}
	putchar('\n');
	return (0);
}
