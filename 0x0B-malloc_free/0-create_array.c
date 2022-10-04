#include "main.h"
/**
* create_array - create an array of char
* @size: size of array
* @c: input character
* Return: pointer to characte
*/
char *create_array(unsigned int size, char c)
{

	if (size == 0)
		return (NULL);
	char *dest;
	int i;

	dest = malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dest[i] = c;
	return (dest);
}
