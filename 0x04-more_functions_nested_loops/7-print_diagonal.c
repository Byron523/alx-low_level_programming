#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: input value
* Return: non
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				_putchar(32);
			}
			_putchar(92);
		}
	}
}
