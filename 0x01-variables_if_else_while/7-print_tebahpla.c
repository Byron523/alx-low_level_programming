#include <stdio.h>

/**
* main - prints alpphabet in revesre
*
* Return: zero for success
*/

int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
