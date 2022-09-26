#include "main.h"

/**
* _strspn - finds length of a prefix
* @s: input
* @accept: bytes to compare from
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				a++;
			}
		}
	}

	return (a);
}
