#include <stdio.h>

/**
* main - prints where file was compiled
* from
* Return: zero for success, 1 otherwise
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
