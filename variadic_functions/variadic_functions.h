#ifndef __VARIADIC_FUNC_H__
#define __VARIADIC_FUNC_H__

	/*INCLUDE LIBRAIRY*/
#include <stdarg.h>

	/*STRUCT*/
/**
 * struct Type - struct for char list and function call adapted at the char
 *
 * @type: char which indicated the format
 * @f: function pointer to function adapted at the char "type"
 */
typedef struct Type
{
	char type;
	void (*f)(va_list arg);
} Type;

	/*PROTOTYPE _putchar*/
int _putchar(char c);

	/*PROTOTYPE TASKS*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

	/*PROTOTYPE TASK 3*/
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
