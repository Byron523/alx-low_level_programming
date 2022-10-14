#include <stdio.h>
#include "3-calc.h"

/**
 * main - maint function
 * @argc: argument count
 * @argv: at argument vector
 * Return: zero unless otherswise
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*byron)(int, int);

	if (argc != 4)
		exit(98);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(98);
	}

	byron = get_op_func(argv[2]);
	if (byron == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", byron(i, j));
	return (0);
}
