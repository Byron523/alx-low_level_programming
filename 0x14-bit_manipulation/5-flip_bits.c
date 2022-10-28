#include "main.h"
/**
 * flip_bits - returns number of bits you would flip
 * to get from one to another
 * @n: one bit
 * @m: another bit
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
