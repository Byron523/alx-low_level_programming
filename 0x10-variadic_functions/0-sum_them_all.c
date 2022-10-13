#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - adds numbers
* @n: numbers of arguments
* Return: total of numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
