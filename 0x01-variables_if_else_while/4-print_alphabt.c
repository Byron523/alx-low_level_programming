#include <stdio.h>

/**
* main - prints the lower character of alpha
*
* Return: zero for success
*/

int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		if (low[a] == 'q' || low[a] == 'e')
		{
			continue;
		}
		else
		{
			putchar(low[a]);
		}
	}
	putchar('\n');
	return (0);
}
