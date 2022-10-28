#include "main.h"
/**
 * set_bit - sets the value of a bit to one
 * @n: number to be changed
 * @index: the position to be changed
 * Return: an int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
