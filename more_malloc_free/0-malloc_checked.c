#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory of size in parameter
 * @b: size in bytes of the array
 *
 * Return: the address of tab if sucess.
 *	exit 48 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	char *tab = NULL;

	if (b <= 0)
		exit(98);
	tab = malloc(b);
	if (tab == NULL)
		exit(98);
	return (tab);
}
