#include "main.h"

/**
 * puts_half - prints half of a string got
 * @str: strings to be print
 */
void puts_half(char *str)
{
	int i, lenght;

	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	if ((lenght % 2) == 0)
	{
		for (i = (lenght / 2); i < lenght; i++)
			_putchar(str[i]);
	} else
	{
		for (i = (lenght + 1) / 2; i < lenght; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
