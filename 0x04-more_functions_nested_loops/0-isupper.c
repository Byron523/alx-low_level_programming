#include "main.h"

/**
* _isupper - check if character is upper
* @c: character in
* Return: 1 if yes 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
