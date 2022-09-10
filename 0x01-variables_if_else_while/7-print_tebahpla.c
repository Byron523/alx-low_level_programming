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

	for (i = 26; i > 0; i--)
	{
		putchar(low[i]);
	}
	putchar('\n');
	return (0);
}
