#include <stdio.h>
#include <stdlib.h>
/**
* main - prints sum of arguments
* @argc: numbers of arguments
* @argv: arguments passed
* Return: zero for success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	
	int a = atoi(argv[1]), b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
