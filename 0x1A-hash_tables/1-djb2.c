#include "hash_tables.h"

/**
* hash_djb2 - function that generates a random number given a string
* @str: input string
* Return: a hash number
*/
unsigned long int hash_djb2(const unsigned char *str)
{
		unsigned long int hash;
		int c;

		hash = 5381;
		for (c = *str++; c; c = *str++)
		{
			hash = ((hash << 5) + hash) + c;
		}

		return (hash);
}
