#include "main.h"

/**
 * puts2 - print every other char, start with 1 char.
 * @str: strings at print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
			_putchar(str[i]);
		else if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
