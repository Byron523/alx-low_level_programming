#include "main.h"

/**
* print_square - print square o fn
* @size: size of input
* Return: non
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
	}
	_putchar('\n');
}
