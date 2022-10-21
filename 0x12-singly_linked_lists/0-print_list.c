#include "main.h"

/**
 * print_list - prints a list of linked list
 * @h: input nodes
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h->next = h;
		n++;
	}
	return (n);
}
