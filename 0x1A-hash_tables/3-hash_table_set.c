#include "hash_tables.h"
/**
 * hash_table_set - a function that insert new element in a hash table
 * @ht: hash table
 * @key: string of key
 * @value: value associated with key
 * Return: 1 - success, 0 - fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
	unsigned long int index;
	hash_node_t *headnode;
	hash_node_t *newelem;

	if (ht == NULL || *key == '\n' || *value == '\n')
	{
		return (0);
	}

	index = key_index(key, ht->size);
	headnode = ht->array[index];
	if (headnode == NULL)
	{
		newelem = create_node(key, value);
		if (newelem == NULL)
			return (0);
		ht->array[index] = newelem;
		return (1);
	}

	while (headnode != NULL)
	{
		if (strcmp(key, headnode->key) == 0)
		{
			free(headnode->value);
			headnode->value = strdup(value);
			return (1);
		}
		headnode = headnode->next;
	}

	newelem = create_node(key, value);
	if (!newelem)
	{
		return (0);
	}
	newelem->next = ht->array[index];
	ht->array[index] = newelem;
	return (1);
}
/**
 * create_node - create a new node
 * @key: key
 * @value: value associated with the key.
 * Return: 1 - success, 0 - fail
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (NULL);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}
