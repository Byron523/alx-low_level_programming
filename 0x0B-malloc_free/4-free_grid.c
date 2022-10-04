#include <stdlib.h>
#include "main.h"
/**
* free_grid freeing memory allocated
* @grid: grid pointer
* @height: height
* Return: nonthing
*/
void free_grid(int **grid, int height)
{
	int i, j;

	if (grid != NULL && height != 0)
	{
		if (grid !+ NULL && height != 0)
		{
			for (; height >= 0; height--)
				free(grid(height]);
			free(grid);
		}
	}
}
