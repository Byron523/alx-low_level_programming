#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: number separator
* @n: number of arguments
* Return: non
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, int);
		printf("%d", j);
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
