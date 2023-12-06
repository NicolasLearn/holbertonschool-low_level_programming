#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the adress of the hash table.
 * @key: is the "str" that will allow get the hash value.
 *
 * Return: the value associated with the element on success.
 * NULL if not found the key.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *buf_node;
	char *buf_str = NULL;
	unsigned long int h_index = 0;

	if ((ht == NULL) || (ht->array == NULL) || (key == NULL))
		return (NULL);
	h_index = key_index((unsigned char *)key, ht->size);
	buf_node = ht->array[h_index];
	while (buf_node != NULL)
	{
		if ((strcmp(buf_node->key, key)) == 0)
		{
			if (buf_node->value == NULL)
				buf_str = "(null)";
			buf_str = buf_node->value;
			break;
		}
		buf_node = buf_node->next;
	}
	return (buf_str);
}
