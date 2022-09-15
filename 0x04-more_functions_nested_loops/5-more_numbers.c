#include "main.h"

/**
* more_numbers - printing 0 to 14
* Return: non
*/

void more_numbers(void)
{
	char d[] = "01234567891011121314";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
