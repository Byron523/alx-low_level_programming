#include <stdio.h>

/**
* main - prints numbers of base 16 in lowercase
*
* Return: zeroo for sucecess
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 96; i < 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
