#include <stdio.h>
#include <stdlib.h>
/**
* main - counts the fewest cins possible
* @argc: argument counts
* @argv: argument vector
* Return: return 0 for success
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int i = atoi(argv[1]), j = 0;

	while (i >= 25)
	{
		i -= 25;
		j++;
	}
	while (i >= 10)
	{
		i -= 10;
		j++;
	}
	while (i >= 5)
	{
		i -= 5;
		j++;
	}
	while (i >= 2)
	{
		i -= 2;
		j++;
	}
	while (i >= 1)
	{
		i -= 1;
		j++;
	}

	printf("%d\n", j);
	return (0);
}
