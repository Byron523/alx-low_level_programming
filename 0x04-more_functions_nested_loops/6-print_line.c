#include "main.h"

/**
* print_line - prints a underscore
* Return: non
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		continue;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
