#include "main.h"
/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: input strings of binary
 * Return: dec or 0 other wise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		j <<= 1;
		if (*(b + i) == '1')
			j ^= 1;
		i++;
	}
	return (j);
}
