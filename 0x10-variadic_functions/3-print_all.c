#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything given
* @format: input format
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j, k = 0;
	char *s;
	const char type[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (type[j])
		{
			if (format[i] == type[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), k = 1;
				break;
			case 's':
				s = va_arg(ptr, char *), k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"),	va_end(ptr);
}
