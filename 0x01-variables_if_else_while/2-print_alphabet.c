#include <stdio.h>

/**
* main - prints the lowercase alphabet letters
*
* Return -returns zero for success
*/

int main(void)
{
	int a;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 26; a++)
		putchar(alph[a]);
	putchar('\n');
	return (0);
}
