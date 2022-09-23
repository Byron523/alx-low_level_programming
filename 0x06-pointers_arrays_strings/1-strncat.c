#include "main.h"

/**
* _strncat - joins also two strings
* @dest: destination point
* @src: source of the joins
* @n: bytes that will be used
* Return: a character
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
