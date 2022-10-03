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
	int i, k, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
