#include <stdio.h>

/**
* main - prints the lowercase alphabet letters
*
* Return -returns zero for success
*/

int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		putchar("%c", a);
	return (0);
}
