#include <stdio.h>

/**
 * main - Entry point
 * print with putchar all combinaisons of single-digit numbers
 * * printed in ascending order
 * * numbers must be separated by , and space
 * * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int countA;
	int countB = 0;
	int countC = 0;

	for (countA = 0; countA < 10; countA++)
	{
		putchar(48 + countA);

		while (countB < 9)
		{
			putchar(44);
			countB++;
			break;
		}

		while (countC < 9)
		{
			putchar(32);
			countC++;
			break;
		}
	}
	putchar('\n');
	return (0);
}
