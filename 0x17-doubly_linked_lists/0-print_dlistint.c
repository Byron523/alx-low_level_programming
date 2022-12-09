#include "lists.h"

/**
* print_dlistint - prints elements of a double linked list
* @h: head of a list
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
