#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to be printed.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *buf_tab;
	unsigned int index, size, fst_print = 0;

	if ((ht == NULL) || (ht->array == NULL))
		return;
	size = ht->size;
	putchar('{');
	for (index = 0; index < size; index++)
	{
		buf_tab = ht->array[index];
		if (buf_tab != NULL)
		{
			if (fst_print)
				printf(", ");
			printf("'%s': '%s'", buf_tab->key, buf_tab->value);
			fst_print = 1;
			while (buf_tab->next != NULL)
			{
				buf_tab = buf_tab->next;
				printf(", '%s': '%s'", buf_tab->key, buf_tab->value);
			}
		}
	}
	putchar('}');
	putchar('\n');
}
