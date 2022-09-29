#include "main.h"

/**
* is_prime_number - checks if is prime
* @n: number to be checked
* Return: an int
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	if (n == 1)
	{
		return (0);
	}
	return (prime(n, 2));
}


/**
* prime - checks is n is prime
* @a: input
* @b: loop number
* Return: ! is true or otherwise 0
*/

int prime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + prime(a, b + 1));
}
