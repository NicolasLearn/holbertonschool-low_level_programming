#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by new line
 *
 * @separator: string to be printed between numbers
 * @n: number of paramaters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_arg;

	va_start(list_arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_arg, int));
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_arg);
}
