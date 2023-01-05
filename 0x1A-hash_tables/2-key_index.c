#include "hash_tables.h"

/**
 * key_index - function that gives index of a key
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: the function uses the hash_djb2 function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
