#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *)&i;

	if (*j)
		return (1);
	return (0);
}
