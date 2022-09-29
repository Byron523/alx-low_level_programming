#include "main.h"

/**
* factorial - find a factorial
* @n: input length
* Return: an int
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return ( n * factorial(n - 1));
}
