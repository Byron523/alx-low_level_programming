#include <stdio.h>

/**
* main - prints aphabet in lower and uppercase
*
* Return: zero for success
*/

int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char upp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(low[a]);
	}
	for (a = 0; a < 26; a++)
	{
		putchar(upp[a]);
	}
	putchar('\n');
	return (0);
}
