#include "hash_tables.h"
/**
 * key_index - function that return the index of a key.
 * @key: key crossponding to value
 * @size: size of array of hash table
 * Return: index of stored value at given key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
