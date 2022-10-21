#include "lists.h"

/**
 * list_len - prints lenght of list
 * @h: node to be counted
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
