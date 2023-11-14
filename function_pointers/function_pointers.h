#ifndef __FUNCTION_POINT_H__
#define __FUNCTION_POINT_H__

/*Prototype _putchar*/
int _putchar(char c);

/*Prototype project*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
