#include "lists.h"

/**
 * listint_len - return number of elemnts
 * @h: input list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
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
