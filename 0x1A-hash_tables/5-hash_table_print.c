#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	putchar("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (i != ht->size && node != NULL)
			{
				printf(", ");
			}
		}
	}
	printf("}\n");
}
