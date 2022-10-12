#include "function_pointers.h"

/**
* print_name - is a function that prints name
* of a person
* @name: name of a person
* @f: function pointer
* Return: non
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
