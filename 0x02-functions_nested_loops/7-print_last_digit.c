#include "main.h"

/**
* print_last_digit - returns last digit
* @j: input value
* Return: returns last value
*/

int print_last_digit(int j)
{
	int l;

	l = j % 10;

	if (l > 0)
	{
		_putchar(l + 48);
		return (l);
	}
	else if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	return (0);
}
