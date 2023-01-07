#include "hash_tables.h"

/**
* key_index - a fucntion that returns the index of a key
* @key: is the key
* @size: the size of the array of the hash table
* Return: the index to store key/value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
