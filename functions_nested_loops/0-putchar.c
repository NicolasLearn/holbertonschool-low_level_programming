#include "main.h"

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
