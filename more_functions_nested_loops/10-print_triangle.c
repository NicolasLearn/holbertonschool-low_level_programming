#include "main.h"

/**
 * print_triangle - print a triangle with a character '#'
 * @size: number of size of the triangle
 */
void print_triangle(int size)
{
	int printSpace, printChar, limitPrintChar;

	limitPrintChar = 0;
	if (size <= 0)
		_putchar('\n');
	for (; size > 0; size--)
	{
		printSpace = size;
		while (printSpace > 1)
		{
			_putchar(' ');
			printSpace--;
		}
		printChar = 0;
		while (printChar <= limitPrintChar)
		{
			_putchar('#');
			printChar++;
		}
		limitPrintChar++;
		_putchar('\n');
	}
}
