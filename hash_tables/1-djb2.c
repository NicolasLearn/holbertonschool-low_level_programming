#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int cur_char, index = 0;

	hash_value = 5381;
	while ((cur_char = str[index]))
	{
		hash_value = ((hash_value << 5) + hash_value) + cur_char;
		index++;
	}
	return (hash_value);
}
