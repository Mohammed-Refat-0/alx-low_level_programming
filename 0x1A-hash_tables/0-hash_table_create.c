#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash-table
 *@size: size of the array
 * Return: pointer to hash-table, NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashptr;

	hashptr = malloc(sizeof(hash_table_t));

	if (!hashptr)
	{
		return (NULL);
	}
	hashptr->size = size;
	hashptr->array = malloc(sizeof(hashptr->array) * size);
	if (!hashptr->array)
	{
		free(hashptr);
		return (NULL);
	}
	return (hashptr);
}
