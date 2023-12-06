#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the "str" that will allow get the hash value.
 * @value: is the value associated with the key.
 *
 * Return: 1 on sucess. Otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_h_node;
	unsigned long int h_index = 0;

	if ((ht == NULL) || (ht->array == NULL) || (key == NULL))
		return (0);
	if (value == NULL)
		value = "";
	new_h_node = malloc(sizeof(hash_node_t));
	if (new_h_node == NULL)
	{
		free(new_h_node);
		new_h_node = NULL;
		return (0);
	}
	h_index = key_index((unsigned char *)key, ht->size);
	new_h_node->key = strdup(key);
	new_h_node->value = strdup(value);
	if (ht->array[h_index] != NULL)
	{
		if (ht->array[0] == NULL)
			new_h_node->next = NULL;
		else
			new_h_node->next = ht->array[0];
		ht->array[0] = new_h_node;
	} else
	{
		new_h_node->next = NULL;
		ht->array[h_index] = new_h_node;
	}
	return (1);
}
