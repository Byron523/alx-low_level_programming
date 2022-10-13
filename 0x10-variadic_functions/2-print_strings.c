#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints input strings
* @separator: string separator
* @n: number of arguments
* Return: nothin
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
