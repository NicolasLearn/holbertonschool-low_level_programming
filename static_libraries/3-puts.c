#include "main.h"

/**
 * _puts - print a string enter in parmater to stdout
 * @str: parameter type char to bo printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
