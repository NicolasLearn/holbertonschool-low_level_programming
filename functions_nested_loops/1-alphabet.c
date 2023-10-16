#include "main.h"

/**
 * main - Entry
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}


/**
 * print_alphabet
 * function for print the alphabet in lowercase
 *
 */
int print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar(10);
	return (0);
}
