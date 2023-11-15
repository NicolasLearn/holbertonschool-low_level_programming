#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arg);
}
