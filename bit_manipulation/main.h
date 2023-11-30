#ifndef __MAIN_H__
#define __MAIN_H__

/*---------------------------------------------------------------------------*/
		/*LIBRAIRY*/
/*---------------------------------------------------------------------------*/

#include <stdlib.h>

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE*/
/*---------------------------------------------------------------------------*/

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
	int check_str(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
	unsigned long int two_power_index(unsigned int power);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
