#include "main.h"
/**
* _putchar - a fucntion that prints a char
*
* Return: Always 0
*
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
