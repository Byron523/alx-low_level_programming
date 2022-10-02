#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - prints sum of poistive numbers
* @argc: arguments count
* @argv: argument vector
* Return: zero for success
*/
int main(int argc, char *argv[])
{
	int i, j = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0 || !isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			j = j + atoi(argv[i]);
		}
	}
	printf("%d\n", j);
	return (0);
}
