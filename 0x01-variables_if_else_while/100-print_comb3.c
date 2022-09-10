#include <stdio.h>

/**
* main - printsthe possible combination of numbers
*
* Return: zero fi everything is ok
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		for (j = 49; j < 58; j++)
		{
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
