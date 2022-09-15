#include "main.h"
#include <unistd.h
/**
* _putchar - writes character to stdout
* @c: character print
* Return: 0
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
