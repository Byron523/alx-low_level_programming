#include <stdio.h>

/**
* main - prints the argument name
* @argc: argument count
* @argv: argument vector
* Return: returns 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
