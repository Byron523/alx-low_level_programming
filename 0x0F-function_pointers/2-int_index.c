#include "function_pointers.h"

/**
* int_index - returns if found an index
* @size: size of array
* @array: array to be searched
* @cmp: pointer to function
* to be searched
* Return: -1 if no match or size is less
* than 1, int otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = (*cmp)(array[i]);
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
