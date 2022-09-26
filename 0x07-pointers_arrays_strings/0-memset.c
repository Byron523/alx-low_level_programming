#include "main.h"

/**
* _memset - replaces chars with another
* @s: input string
* @b: character to replace with
* @n: number of bytes
* Return: a character
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
