#include <stdio.h>
/**
* print_to_98 - 98 is last number
* @n: the input number
* Return: no return
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("%d\n", n);
}
