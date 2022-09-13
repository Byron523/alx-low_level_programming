#include "main.h"

/**
* _islower - return lower chaarcters
*
* @c: input variable and value as int
* Return: O if upper
*/

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
