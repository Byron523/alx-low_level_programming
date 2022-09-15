#include "main.h"

/**
* _isdigit - checks if input is a digit
* @c: is input to be checked
* Return: 1 is yes ) otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
