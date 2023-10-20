#include "main.h"
#include <stdio.h>

/**
 * main - Entry program
 *
 * Return: always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - print number from 1 to 100
 * * * print Fizz if a number is multiple of 3
 * * * print Buzz if a number is mutltiple of 5
 * * * print FizzBuzz if a number is multiple of 3 and 5
 */
void fizz_buzz(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count == 100)
			printf("Buzz\n");
		else if ((count % 3 == 0) && (count % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", count);
	}
}
