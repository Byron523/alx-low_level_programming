#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates arrays memory
* @nmemb: array of nmemb
* @size: size of an array
* Return: non
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(unsigned int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = nmemb;

	return (array);
}
