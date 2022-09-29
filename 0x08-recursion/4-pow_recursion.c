#include "main.h"

/**
* _pow_recursion - find power of
* a number using a recursion
* @x: input number
* @y: power
* Return: an int 
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y-1));
}