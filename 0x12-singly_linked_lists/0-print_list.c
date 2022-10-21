#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a list of linked list
 * @h: input nodes
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->str;
		n++;
	}
	return (n);
}
