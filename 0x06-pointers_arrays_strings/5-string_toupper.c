#include "main.h"

/**
* string_toupper - makes a lower to uupper
* @n: string input
* Return: a char
*/

char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if ((*(n + i) >= 97) && (*(n + 1) <= 122))
		{
			*(n + 1) = (*(n + 1) - 32);
		}
		i++;
	}
	return (n);
}
