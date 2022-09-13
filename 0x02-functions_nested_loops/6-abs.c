#include "main.h"

/**
* _abs - remving negative sign
* @i: input value
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
		for (; i < j; i--)
		{
			count++;
		}
		return (count);
	}
}
