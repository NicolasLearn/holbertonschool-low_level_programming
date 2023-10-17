#include "main.h"

/** print_alphabet
 * function for print the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar(10);
}
