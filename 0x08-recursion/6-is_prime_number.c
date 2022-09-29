#include "main.h"

/**
* is_prime_number - checks if is prime
* @n: number to be checked
* Return: an int
*/

int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else if (n == n)
		return (1);
	else if ((n %  is_prime_number(n -1) < 0))
		 return (0);
}
