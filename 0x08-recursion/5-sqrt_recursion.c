#include "main.h"

/**
* _sqrt_recursion - finds a square
* with a number
* @n: int number to be squared
* Return: an int
*/

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
	{
		if (2 % (n / 2) == 0)
		{
			if (2 * (n / 2) == n)
				return (2);
			else
				return (-1);
		}
		return (0 + _sqrt_recursion(n - 1));
	}
}
