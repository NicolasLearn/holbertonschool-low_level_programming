#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be checked
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int value = n % 10;

	if (value < 0)
	{
		value *= -1;
	}
	_putchar(value + '0');
	return (value);
}
