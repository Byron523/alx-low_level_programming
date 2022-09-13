#include "main.h"

/**
* times_table - multiplication table
* Return: nothing
*/

void times_table(voi)
{
	int i, j, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			m = i * j;
			_putchar(m);
			_putcahr(44);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
