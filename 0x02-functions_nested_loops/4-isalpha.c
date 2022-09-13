#include "main.h"

/**
* _isalpha - returns 1 if alpha
* @c: input value
* Return: 1 for success
*/

int _isalpha(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else if (c >= 65 && c < 92)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
