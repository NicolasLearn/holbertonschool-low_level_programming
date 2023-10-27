#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: array in 2 dimensions with column at 8
 */
void print_chessboard(char (*a)[8])
{
	int line, column;

	for (line = 0; line < 8; line++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[line][column]);
		}
		_putchar('\n');
	}
}
