#include "main.h"

/**
* jack_bauer - retrurn nonthing
*
*/

void jack_bauer(void)
{
	int i, j, k, a;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (a = 48; a < 58; a++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(a);
					_putchar('\n');
				}
			}
		}
	}
}
