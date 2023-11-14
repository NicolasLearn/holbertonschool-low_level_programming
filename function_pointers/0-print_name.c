#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print string with function pointer
 * @name: string at print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		exit(EXIT_FAILURE);
	f(name);
}
