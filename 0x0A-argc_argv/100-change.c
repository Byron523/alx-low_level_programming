#include <stdio.h>
#include <stdlib.h>
/**
* main - finds the fewest number of coins
* @argc: argument count
* @argv: arguments inputs
* Return: 0 for success 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	while (i > 0)
	{
		if (i >= 25)
			i -= 25;
		if (i >= 10)
			i -= 10;
		if (i >= 5)
			i -= 5;
		if (i >= 2)
			i -= 2;
		if (i >= 1)
			i -= 1;
		j++;
	}
	printf("%d\n", j);
	return (0);
}
