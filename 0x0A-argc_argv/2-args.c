#include <stdio.h>
/**
* main - prints each argument
* @argc: argument count
* @argv: argument vector
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
