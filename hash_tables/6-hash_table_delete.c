#include "hash_tables.h"


/*---------------------------------------------------------------------------*/
		/*CLEAR_NODE*/
/*---------------------------------------------------------------------------*/

/**
 * clear_node - delete one node
 * @node: pointer to node at deleted
*/
void clear_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	node->key = node->value = NULL;
	node->next = NULL;
	free(node);
	node = NULL;
}

/*---------------------------------------------------------------------------*/
		/*CLEAR_TABLE*/
/*---------------------------------------------------------------------------*/

/**
 * clear_table - delete table
 * @table: pointer to table at deleted
*/
void clear_table(hash_table_t *table)
{
	table->size = 0;
	free(table->array);
	table->array = NULL;
	free(table);
	table = NULL;
}

/*---------------------------------------------------------------------------*/
		/*HASH_TABLE_DELETE*/
/*---------------------------------------------------------------------------*/

/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table to be deleted.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *buf_cur, *buf_next;
	int index;

	if ((ht == NULL) || (ht->array == NULL))
		return;
	for (index = (ht->size) - 1; index >= 0; index--)
	{
		buf_cur = ht->array[index];
		if (buf_cur != NULL)
		{
			if (buf_cur->next != NULL)
			{
				buf_next = buf_cur->next;
				while (buf_next != NULL)
				{
					clear_node(buf_cur);
					buf_cur = buf_next;
					buf_next = buf_cur->next;
				}
			}
			clear_node(buf_cur);
		}
	}
	clear_table(ht);
}
