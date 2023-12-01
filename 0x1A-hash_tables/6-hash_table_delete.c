#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *nextnode;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			nextnode = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = nextnode;
		}
	}
	free(ht->array);
	free(ht);
}
