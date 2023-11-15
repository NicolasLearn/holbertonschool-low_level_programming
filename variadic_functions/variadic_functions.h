#ifndef __VARIADIC_FUNC_H__
#define __VARIADIC_FUNC_H__

/*INCLUDE LIBRAIRY*/
#include <stdarg.h>

/*PROTOTYPE _putchar*/
int _putchar(char c);

/*PROTOTYPE TASKS*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
