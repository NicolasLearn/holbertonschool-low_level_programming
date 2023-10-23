#include "main.h"

/**
 * swap_int - swap value of the variables in parameter with pointer
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int tampon = *a;
	*a = *b;
	*b = tampon;
}
