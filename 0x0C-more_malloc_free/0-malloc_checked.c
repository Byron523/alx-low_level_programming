#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: input value to be allocated
* Return: non
*/
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	else
		return (i);
}
