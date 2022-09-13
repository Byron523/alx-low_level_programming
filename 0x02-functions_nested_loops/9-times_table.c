#include "main.h"

/**
* times_table - multiplication table
* Return: nothing
*/

void times_table(void)
{
	int i, j, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			m = i * j;
			_putchar(m);
			_putchar(44);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
