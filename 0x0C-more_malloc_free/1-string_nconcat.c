#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatennates two strings
* @s1: one string to be joined
* @s2: string to join another
* @n: condition to check
* Return: a pointer to a character
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	out = malloc(sizeof(char) * (i + j + 1));
	if (out == NULL)
		return (NULL);

	if (n > j)
		n = j;

	k = i + n;

	for (l = 0; l < k; l++)
		if (l < i)
			out[l] = s1[l];
		else
			out[l] = s2[l - i];

	out[i] = '\0';

	return (out);
}
