#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print value of "arg" in type "char"
 *
 * @arg: current value of va_list
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print value of "arg" in type "int"
 *
 * @arg: current value of va_list
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print value of "arg" in type "float"
 *
 * @arg: current value of va_list
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - print value of "arg" in type "string"
 *	if "arg == NULL" print "(nil)"
 *
 * @arg: current value of va_list
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	printf("%s", ((str == NULL) ? "(nil)" : str));
}

/**
 * print_all - print anything type of argument
 *
 * @format: list of type of arguments passed
 */
void print_all(const char * const format, ...)
{
	unsigned int j, i = 0, first_print = 0;
	va_list args;

	Type type_choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0;
		while (type_choice[j].type != '\0')
		{
			if (format[i] == type_choice[j].type)
			{
				if (first_print != 0)
					printf(", ");
				type_choice[j].f(args);
				first_print++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
