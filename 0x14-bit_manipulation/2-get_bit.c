#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: number to locate bit
 * @index: index of the bit
 * Return: an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
