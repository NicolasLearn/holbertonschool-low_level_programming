#include <unistd.h>

int _putchar(char);
int print_alphabet(void);

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
