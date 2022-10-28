#include "main.h"

/**
 * print_binary - prints binary equiv of a dec
 * @n: number to be made binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	i = ~i ^ (~i >> 1);
	for (; i != 0; i >>= 1)
		_putchar((n & i) ? '1' : '0');
}
