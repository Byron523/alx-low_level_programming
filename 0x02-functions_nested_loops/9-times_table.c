#include "main.h"

/**
* times_table - multiplication table
* Return: nothing
*/

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{		
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			_putchar(44);
			_putchar(32);
			if (m <= 9)
			{
				_putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
