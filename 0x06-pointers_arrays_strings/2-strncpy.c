#include "main.h"

/**
* _strncpy - copies a srings
* @dest: destination of ile
* @src: source of file
* @n: number of bytes
* Return: a char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] =src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
