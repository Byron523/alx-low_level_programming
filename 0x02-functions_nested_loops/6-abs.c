#include "main.h"

/**
* _abs - remving negative sign
* @j: input value
* Return: zero for success
*/

int _abs(int j)
{
	int count = 0, i;

	if (j >= 0)
	{
		return (j);
	}
	else if (j < 0)
	{
		for (i = 0; i > j; j++)
		{
			count = count + 1;
		}
	}
	return (count);
}
