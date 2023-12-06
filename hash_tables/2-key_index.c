#include "hash_tables.h"

/*---------------------------------------------------------------------------*/
		/*HASH_CODE*/
/*---------------------------------------------------------------------------*/

/**
 * hash_code - give index of the key got.
 * @key: key of the value.
 * @size: size of the hash table.
 *
 * Return: the index of the key.
*/
unsigned long int hash_code(unsigned long int key, unsigned long int size)
{
	return (key % size);
}

/*---------------------------------------------------------------------------*/
		/*KEY_INDEX*/
/*---------------------------------------------------------------------------*/

/**
 * key_index - Gives you the index of a key.
 * @key: Pointer to the key.
 * @size: Size of the hash table.
 *
 * Return: The index of the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index = hash_code(index, size);
	return (index);
}
