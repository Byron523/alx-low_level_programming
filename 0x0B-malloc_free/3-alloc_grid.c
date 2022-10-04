#include <stdlib.h>
0;276;0c#include "main.h"
/**
* alloc_grid - allocates a grid
* @width: input withd
* @height: input height
* Return: an int
*/
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			for (; i >= 0; i--)
			     free(m[i]);

			free(m);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			m[i][j] = 0;

	return (m);
}
