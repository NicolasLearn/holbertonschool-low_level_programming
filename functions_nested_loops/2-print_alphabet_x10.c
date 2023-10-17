#include "main.h"

/**
 * print_alphabet_x10 - function for print the alphabet
 *	in lowercase 10 times
 *	followed by a new line
 */
void print_alphabet_x10(void)
{
	char count;
	int countLine;

	for (countLine = 1; countLine <= 10; countLine++)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
			_putchar(count);
		}
	_putchar(10);
	}
}
