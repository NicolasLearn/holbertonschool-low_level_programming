#include "main.h"

/**
 * main - Entry
 * display text in array with _putchar function
 *
 * Return: Always 0.
 */

int main(void)
{
	char texte[8] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(texte[count]);
	}
	_putchar(10);
	return (0);
}
