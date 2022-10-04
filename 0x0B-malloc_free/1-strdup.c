#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicates a string and rint it
* @str: string input
* Retrun: pointer to a char
*/
char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dest = malloc(sizeof(char) * i);
	if (dest == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dest[j] = str[j];
	return (dest);
}
