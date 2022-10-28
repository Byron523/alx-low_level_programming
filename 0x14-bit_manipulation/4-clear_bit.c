#include "main.h"
/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: the input integer
 * @index: index position
 * Return: 1 if worked -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);
	i = 1 << index;
	*n &= ~(i);
	return (1);
}
