#include <stdlib.h>
#include "main.h"
/**
* str_concat - joins two given strings
* @s1: input string one
* @s2: input string 2
* Return: a pinter to a char
*/
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i, j, k, m;	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	dest = malloc(sizeof(char) * (i + j + 1));
	if (dest == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		dest[k] = s1[k];
	m = j;

	for (j = 0; j <= m; j++, k++)
		dest[k] = s2[j];
	return (dest);
}
