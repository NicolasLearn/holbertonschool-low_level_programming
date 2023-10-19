#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * * followed by a new line
 */
void more_numbers(void)
{
	int line, column;

	for (line = 0; line < 10; line++)
	{
		for (column = 0; column < 15; column++)
		{
			if (column > 9)
			{
				_putchar('0' + column / 10);
			}
			_putchar('0' + (column % 10));
		}
		_putchar('\n');
	}
}
