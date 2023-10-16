#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * get a random number and get the last digit of this number
 * print the result in function the result of the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDig = n % 10;
	if (lastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else if (lastDig < 6 && lastDig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	}

	return (0);
}
