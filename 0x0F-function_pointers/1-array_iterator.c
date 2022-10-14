#include "function_pointers.h"
/**
* array_iterator - iterates over an array
* @array: array to be iterated
* @size: size of array
* @action: pointer to a void function
* Return: a void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < n; i++)
			(*action)(array[i]);
}
