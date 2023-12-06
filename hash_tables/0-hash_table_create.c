#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array create.
 *
 * Return: pointer to the newly created hash table.
 * Or NULL if failed.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
	{
		free(new_hash_table);
		new_hash_table = NULL;
	}
	else
	{
		new_hash_table->size = size;
		new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
		if (new_hash_table->array == NULL)
		{
			free(new_hash_table->array);
			free(new_hash_table);
			new_hash_table = NULL;
		} else
		{
			for (i = 0; i < size; i++)
				new_hash_table->array[i] = NULL;
		}
	}
	return (new_hash_table);
}
